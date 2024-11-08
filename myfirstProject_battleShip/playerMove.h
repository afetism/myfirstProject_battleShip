#pragma once
void playerMovementinEnemy()
{
	short int  attackRow=0;
	short int  attackColm=0;
	bool attack = false;
	bool hit = false;
	BOOL emptyField = false;
	while(!emptyField)
	{
		if (AllShipEnemy == 0)
			break;
		  attackRow = rand() % 10;
		  attackColm = rand() % 10;
		if(playerAttack[attackRow][attackColm] == water)
		{
			enemyforMovement[attackRow][attackColm] = cursor;
			emptyField = true;
		}
		
	}
	showGrid(true);
	
	
	while (!attack)
	{

		enemyforMovement[attackRow][attackColm] = cursor;
		int n = _getch();
		if (n == 224)
		{
			n = _getch();
		    moveinBoard(Direction(n), attackRow, attackColm);
		}
		if (n == 13 && playerAttack[attackRow][attackColm] == water)
			attack = true;
		else if(n == 13 && playerAttack[attackRow][attackColm] != water)
			cout << "\a";

		if (attack)
		{
			if (enemyBoard[attackRow][attackColm] == water && playerAttack[attackRow][attackColm] == water)
			{
				playerAttack[attackRow][attackColm] = mis; //miss
				enemyforMovement[attackRow][attackColm] = water;
				playerOrenemy = 1;
			}

			else if (enemyBoard[attackRow][attackColm] == ship && playerAttack[attackRow][attackColm] == water)
			{
				playerAttack[attackRow][attackColm] = Hit;   //hit
				enemyforMovement[attackRow][attackColm] = water;
			    playerOrenemy = 0;
				destroyedShip(false, attackRow, attackColm);
			}
			


		}
		system("cls");
		showGrid(true);
	}
}