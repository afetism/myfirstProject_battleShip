#pragma once
void moveableFirstMenu()
{
	int secim = 0;
	firstMenu(secim);
	while (true)
	{
		int n = _getch();
		while (n == 224)
		{
			n = _getch();
			switch (n)
			{
			case UP:
				if (secim == 0)
					secim = 2;
				else if (secim == 1 || secim == 2)
					secim--;
				break;
			case DOWN:
				if (secim == 0 || secim == 1)
					secim++;
				else if (secim == 2)
					secim = 0;
				break;
			default:
				break;
			}
			
			system("cls");
			firstMenuLogo();
			firstMenu(secim);

		}
		if (n == 13)
		{
			if (secim == 0)
			{
				system("cls");
				int choose_place = 0;
				secondMenuLogo();
				secondMenu(choose_place);

				while (true)
				{
					int num = _getch();
					while (num == 224)
					{
						num = _getch();
						switch (num)
						{
						case UP:
							if (choose_place == 0)
								choose_place = 1;
							else if (choose_place == 1)
								choose_place--;
							break;
						case DOWN:
							if (choose_place == 0)
								choose_place++;
							else if (choose_place == 1)
								choose_place = 0;
							break;
						default:
							break;
						}


						system("cls");
						secondMenuLogo();
						secondMenu(choose_place);
					}
					if (num == 13)
					{
						if (choose_place == 0)
						{
							randomPlace = true;
							placementInEnemy();
							placementInPlayer();
							waitingProcess();
							while (true)
							{
								isWar = true;
								showGrid(true);

								playerMovementinEnemy();
								if (playerOrenemy == 0)
									playerMovementinEnemy();

								enemyMovementinPlayer();
								if (playerOrenemy == 1)
									enemyMovementinPlayer();
								if (chekWinner() == true)
								{
									chekWinner();
									break;
								}
							}
						}

						else if (choose_place == 1)
						{

							placementInPlayer();
							showGrid(false);
							system("cls");
							placementInEnemy();
							waitingProcess();
							while (true)
							{
								isWar = true;
								showGrid(true);

								playerMovementinEnemy();
								if (playerOrenemy == 0)
									playerMovementinEnemy();

								enemyMovementinPlayer();
								if (playerOrenemy == 1)
									enemyMovementinPlayer();
								if (chekWinner() == true)
								{
									chekWinner();
									break;
								}
							}
						}
					}
				}

			}
			else if (secim == 1)
			{
				about();
				system("cls");
				firstMenuLogo();
				firstMenu(secim);
			}
			else if (secim == 2)
				exit(0);
			
		}
	}
}