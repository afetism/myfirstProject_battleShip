#pragma once
void moveShip(Direction(dir), int& direction, int& row, int& colm, int shipSize)
{
	switch (dir)
	{
	case UP:
		if (row != 0) {
			if (direction == 1) {
				for (int i = 0; i < shipSize; i++) {
					playerforMovement[row][colm + i] = water;
					playerforMovement[row - 1][colm + i] = moveableShip;
				}
			}
			else {
				for (int i = 0; i < shipSize; i++) {
					playerforMovement[row + i][colm] = water;
					playerforMovement[row - 1 + i][colm] = moveableShip;
				}
			}
			row--;
		}
		else
			cout << "\a";
		break;
	case DOWN:
		if (direction == 1) {
			if (row != 9) {
				for (int i = 0; i < shipSize; i++) {
					playerforMovement[row][colm + i] = water;
					playerforMovement[row + 1][colm + i] = moveableShip;
				}
				row++;
			}
			else
				cout << "\a";
		}
		else {
			if (row != 10 - shipSize) {
				for (int i = 0; i < shipSize; i++)
				{
					playerforMovement[row][colm] = water;
					playerforMovement[row + i + 1][colm] = moveableShip;
				}
				row++;
			}
			else
				cout << "\a";
		}
		break;
	case RIGHT:
		if (direction == 1) {
			if (colm != 10 - shipSize) {
				for (int i = 0; i < shipSize; i++)
				{
					playerforMovement[row][colm] = water;
					playerforMovement[row][colm + i + 1] = moveableShip;
				}
				colm++;
			}
			else
				cout << "\a";
		}
		else {
			if (colm != 9) {
				for (int i = 0; i < shipSize; i++) {
					playerforMovement[row + i][colm] = water;
					playerforMovement[row + i][colm + 1] = moveableShip;
				}
				colm++;
			}
			else
				cout << "\a";
		}

		break;
	case LEFT:
		if (colm != 0) {
			if (direction == 1)
			{
				for (int i = 0; i < shipSize; i++) {
					playerforMovement[row][colm + i] = water;
					playerforMovement[row][colm - 1 + i] = moveableShip;
				}
			}
			else {
				for (int i = 0; i < shipSize; i++) {
					playerforMovement[row + i][colm] = water;
					playerforMovement[row + i][colm - 1] = moveableShip;
				}
			}
			colm--;
		}
		else
			cout << "\a";
		break;
	default:
		break;
	}
}


void moveinBoard(Direction(dir), short int& attackRow, short int& attackColm)
{
	switch (dir)
	{
	case UP:
		if (attackRow != 0)
		{
			swap(enemyforMovement[attackRow][attackColm], enemyforMovement[attackRow - 1][attackColm]);
			attackRow--;
		}
		else
		{
			swap(enemyforMovement[attackRow][attackColm], enemyforMovement[9][attackColm]);
			attackRow = 9;
		}

		break;
	case DOWN:
		if (attackRow != 9)
		{
			swap(enemyforMovement[attackRow][attackColm], enemyforMovement[attackRow + 1][attackColm]);
			attackRow++;
		}
		else
		{
			swap(enemyforMovement[attackRow][attackColm], enemyforMovement[0][attackColm]);
			attackRow = 0;
		}

		break;
	case RIGHT:
		if (attackColm != 9)
		{
			swap(enemyforMovement[attackRow][attackColm], enemyforMovement[attackRow][attackColm + 1]);
			attackColm++;
		}
		else
		{
			swap(enemyforMovement[attackRow][attackColm], enemyforMovement[attackRow][0]);
			attackColm = 0;
		}

		break;
	case LEFT:
		if (attackColm != 0)
		{
			swap(enemyforMovement[attackRow][attackColm], enemyforMovement[attackRow][attackColm - 1]);
			attackColm--;
		}
		else
		{
			swap(enemyforMovement[attackRow][attackColm], enemyforMovement[attackRow][9]);
			attackColm = 9;
		}

		break;
	default:
		break;
	}
}