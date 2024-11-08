#pragma once
void enemyMovementinPlayer()
{
	
	int row, colm;
	bool place = false; //bosh grid
	int direction = 0;
	bool hit = false;
	
	
	
		if (isFirstHit == false)
		{
			if(shipDirection == false)
			{
				row = currentSuccsessRow;
				colm = currentSuccsessColm;
				direction = rand() % 4;
				while (true)
				{
					direction++;
					if (direction > 3)
						direction = 0;
					if (direction == 0) //up
					{
						if (row > 0 && enemyAttack[row - 1][colm] == water)
						{
							row = currentSuccsessRow - 1;
							colm = currentSuccsessColm;
							break;
						}
						else
							continue;
					}
					else if (direction == 1)  //right 
					{
						if (colm < 9 && enemyAttack[row][colm + 1] == water)
						{
							row = currentSuccsessRow;
							colm = currentSuccsessColm + 1;
							break;
						}
						else
							continue;
					}
					else if (direction == 2) //button
					{
						if (row < 9 && enemyAttack[row + 1][colm] == water)
						{
							row = currentSuccsessRow + 1;
							colm = currentSuccsessColm;
							break;
						}
						else
							continue;
					}
					else if (direction == 3)
					{
						if (colm > 0 && enemyAttack[row][colm - 1] == water)
						{
							row = currentSuccsessRow;
							colm = currentSuccsessColm - 1;
							break;
						}
						else
							continue;
					}
					else
						direction++;
				}
			}
			else if (shipDirection == true)
			{
				if(hitCount>=2)
				{
					if (lastHitSuccess)
					{
						switch (smartDirection)
						{
						case 1:
							if (lastHitSuccessRow > 0 && enemyAttack[lastHitSuccessRow - 1][lastHitSuccessColm] == water)
							{
								row = lastHitSuccessRow - 1;
								colm = lastHitSuccessColm;
							}
							else
							{
								row = currentSuccsessRow + 1;
								colm = lastHitSuccessColm;
								smartDirection = 3;
							}
							break;
						case 2:
							if (lastHitSuccessColm < 9 && enemyAttack[lastHitSuccessRow][lastHitSuccessColm + 1] == water)
							{
								row = lastHitSuccessRow;
								colm = lastHitSuccessColm + 1;
							}
							else
							{
								row = lastHitSuccessRow;
								colm = currentSuccsessColm - 1;
								smartDirection = 4;
							}
							break;
						case 3:
							if (lastHitSuccessRow < 9 && enemyAttack[lastHitSuccessRow + 1][lastHitSuccessColm] == water)
							{
								row = lastHitSuccessRow + 1;
								colm = lastHitSuccessColm;
							}
							else
							{
								row = currentSuccsessRow - 1;
								colm = lastHitSuccessColm;
								smartDirection = 1;
							}
							break;
						case 4:
							if (lastHitSuccessColm > 0 && enemyAttack[lastHitSuccessRow][lastHitSuccessColm - 1] == water)
							{
								row = lastHitSuccessRow;
								colm = lastHitSuccessColm - 1;
							}
							else
							{
								row = lastHitSuccessRow;
								colm = currentSuccsessColm + 1;
								smartDirection = 2;
							}
							break;
						
						}
					}
					else
					{
						if (lastHitSuccessColm > currentSuccsessColm) {
							row = lastHitSuccessRow;
							colm = currentSuccsessColm - 1;
							smartDirection = 4;
						}
						else if (lastHitSuccessColm < currentSuccsessColm) {
							row = lastHitSuccessRow;
							colm = currentSuccsessColm  + 1;
							smartDirection = 2;
						}
						else if (lastHitSuccessRow > currentSuccsessRow) {
							row = currentSuccsessRow - 1;
							colm = lastHitSuccessColm;
							smartDirection = 1;
						}
						else if (lastHitSuccessRow < currentSuccsessRow) {
							row = currentSuccsessRow + 1;
							colm = lastHitSuccessColm;
							smartDirection = 3;
						}
					}
				}
			}
		}
	

	while (!place)
	{
		if (isFirstHit)
		{
			row = rand() % 10;
			colm = rand() % 10;
		}
		if (enemyAttack[row][colm] == water)
		{
			place = true;


			if (playerBoard[row][colm] == ship)
			{
				enemyAttack[row][colm] = Hit;  //hit
				playerOrenemy = 1;
				if (smartBot)
				{
					if (isFirstHit)
					{
						isFirstHit = false;
						currentSuccsessRow = row;
						currentSuccsessColm = colm;
						hitCount++;
					}
					else
					{
						hitCount++;
						if (shipDirection == false)
						{

							if (colm > currentSuccsessColm)
								smartDirection = 2;
							else if (colm < currentSuccsessColm)
								smartDirection = 4;
							else if (row > currentSuccsessRow)
								smartDirection = 3;
							else if (row < currentSuccsessRow)
								smartDirection = 1;

							shipDirection = true;
						}
						lastHitSuccessColm = colm;
						lastHitSuccessRow = row;
						lastHitSuccess = true;

					}

				}

				bool destroy_ship = destroyedShip(true, row, colm);

				if (destroy_ship == true)
				{
					isFirstHit = true;
					shipDirection = false;
					lastHitSuccess = false;
				}



			}



			else
			{
				enemyAttack[row][colm] = mis;  //miss
				
					if (shipDirection)
					{
						lastHitSuccess = false;
					}
				
				playerOrenemy = 0;
			}


		}



	}
}