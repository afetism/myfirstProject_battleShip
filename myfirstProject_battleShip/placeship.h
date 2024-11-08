#pragma once
void placementInPlayer()
{
	int randRow, randColm;
	int direction = 0;
	int countofship = 0;
	bool place = false;
	
	for (int shipSize = 5; shipSize >= 2; shipSize--)
	{
		for (int shipCount = 0; shipCount <6 - shipSize; shipCount++)
		{
			place = false;
		
			while (!place)
			{
				direction = rand() % 2;
				if (direction == 1)  //horizontal ----
				{
					randRow = rand() % 10;
					randColm = rand() % (10-shipSize); 
				}
				else if(direction == 0)   // vertical |
				{
					randRow = rand() % (10 - shipSize);
					randColm = rand() % 10;
				}

				if (areAdjacentsCellsEmpty(true, shipSize, randRow, randColm, direction))
					place = true;


				// evvelceden lovhede gorunmesi ucun
				if (place)
				{
					if (direction == 1)
						for (int i = 0; i < shipSize; i++)
							playerforMovement[randRow][randColm + i] = moveableShip;
					else

						if(direction == 0)
							for (int i = 0; i < shipSize; i++)
							playerforMovement[randRow + i][randColm] = moveableShip;
				}
			}
			if (randomPlace == false)
				showGrid(false);
			while (true)
			{
				
				int n = 0;
				if (randomPlace == true)
					n = 13;
				else
				{
					n = _getch();
					reng = true;
				}
				if (n == 224)
				{
					n = _getch();
					
					moveShip(Direction(n), direction, randRow, randColm, shipSize);
					if (!areAdjacentsCellsEmpty(true, shipSize, randRow, randColm, direction))
						reng = false;
						
					
				}
				else if (n == 32)
				{
					n = _getch();
					if(n==114)
					{
						if (direction == 1)
						{
							
								if (randRow > 10 - shipSize)
								{
									int move = (shipSize - (10 - randRow));
									for (int i = 0; i < move; i++) {
										moveShip(Direction(UP), direction, randRow, randColm, shipSize);
									}
								}
							
							    for (int i = 1; i < shipSize; i++) 
								{
								   playerforMovement[randRow][randColm + i] = water;
								   playerforMovement[randRow + i][randColm] = moveableShip;
							    }
							direction = 0;
						}
						else
						{
							if (randColm > 10 - shipSize) { 
								int move = (shipSize - (10 - randColm));
								for (int i = 0; i < move; i++) {
									moveShip(Direction(LEFT), direction, randRow, randColm, shipSize);
								}
							}
							for (int i = 1; i < shipSize; i++) {
								playerforMovement[randRow + i][randColm] = water;
								playerforMovement[randRow][randColm + i] = moveableShip;
							}
							direction=1;
						}
					}
					
					

				}


				else if (n == 13)
				{


					if (areAdjacentsCellsEmpty(true, shipSize, randRow, randColm, direction))
					{
						if (direction == 1)
							for (int i = 0; i < shipSize; i++)
								playerBoard[randRow][randColm + i] = ship;
						else if (direction == 0)
							for (int i = 0; i < shipSize; i++)
								playerBoard[randRow + i][randColm] = ship;

						for (int i = 0; i < 10; i++)
						{
							for (int j = 0; j < 10; j++)
							{
								playerforMovement[i][j] = water;
							}
						}
						break;
					}
					else
						reng = false;
					
					
				}
				if(randomPlace == false)
				{
					system("cls");
					showGrid(false);
				}
			}

			playerShipinfo[countofship].ShipStartRow = randRow;
			playerShipinfo[countofship].ShipStartColm = randColm;
			playerShipinfo[countofship].ShipSize = shipSize;
			playerShipinfo[countofship++].Direction = direction ? 1 : 0;

			if (countofship == 10)
				break;
		}
	}
}


void placementInEnemy()
{

	int row, colm;
	int direction = 0;
	int countofShip = 0;
	bool place;
	for (int i = 0; i < 10; i++) { for (int j = 0; j < 10; j++) { enemyBoard[i][j] = water; } }
	for (int shipsize = 5; shipsize >= 2; shipsize--)
	{
		for (int shipcount = 0; shipcount < 6 - shipsize; shipcount++)
		{
			place = false;
			while (!place)
			{
				direction = rand() % 2;
				if (direction == 1)
				{
					row = rand() % 10;
					colm = rand() % (10 - shipsize);
				}
				else
				{
					row = rand() % (10 - shipsize);
					colm = rand() % 10;
				}


				if (areAdjacentsCellsEmpty(false, shipsize, row, colm, direction))
					place = true;

				if (place)
				{
					if (direction == 1)
					{
						for (int i = 0; i < shipsize; i++)
							enemyBoard[row][colm + i] = ship;
					}
					else
						for (int i = 0; i < shipsize; i++)
							enemyBoard[row + i][colm] = ship;
					for (int i = 0; i < 10; i++)
					{
						for (int j = 0; j < 10; j++)
						{
							enemyforMovement[i][j] = water;
						}
					}
				}
			}
			enemyShipinfo[countofShip].ShipStartRow = row;
			enemyShipinfo[countofShip].ShipStartColm = colm;
			enemyShipinfo[countofShip].ShipSize = shipsize;
			enemyShipinfo[countofShip++].Direction = direction ? 1 : 0;
			

		}
	}




}