#pragma once
bool areAdjacentsCellsEmpty(bool isBoard, int shipsize, int row, int colm, int direction)
{
	char board[sizeBoard][sizeBoard];

	for (int i = 0; i < sizeBoard; i++)
		for (int j = 0; j < sizeBoard; j++)
			isBoard ? board[i][j] = playerBoard[i][j] : board[i][j] = enemyBoard[i][j];


	if (direction == 1) //horizontal ------
	{
		for (int i = 0; i < shipsize; i++)
		{
			if (board[row][colm + i] != water)
				return false;
			if (row != 0)
				if (board[row - 1][colm + i] != water)
					return false;
			if (row != 9)
				if (board[row + 1][colm + i] != water)
					return false;

		}
		if (colm != 0)
		{
			if (board[row][colm - 1] != water)
				return false;
			if (row != 0)
				if (board[row - 1][colm - 1] != water)
					return false;
			if (row != 9)
				if (board[row + 1][colm - 1] != water)
					return false;
		}

		if (colm != 10 - shipsize) {
			if (board[row][colm + shipsize] != water)
				return false;
			if (row != 0)
				if (board[row - 1][colm + shipsize] != water)
					return false;
			if (row != 9)
				if (board[row + 1][colm + shipsize] != water)
					return false;
		}
		return true;

	}
	else
	{
		for (int i = 0; i < shipsize; i++) {

			if (board[row + i][colm] != water)
				return false;
			if (colm != 0)
				if (board[row + i][colm - 1] != water)
					return false;
			if (colm != 9)
				if (board[row + i][colm + 1] != water)
					return  false;
		}

		if (row != 0) {
			if (board[row - 1][colm] != water)
				return false;
			if (colm != 0)
				if (board[row - 1][colm - 1] != water)
					return false;
			if (colm != 9)
				if (board[row - 1][colm + 1] != water)
					return  false;
		}

		if (row != 10 - shipsize) {
			if (board[row + shipsize][colm] != water)
				return false;
			if (colm != 0)
				if (board[row + shipsize][colm - 1] != water)
					return  false;
			if (colm != 9)
				if (board[row + shipsize][colm + 1] != water)
					return  false;
		}

		return true;
	}

	return  false;

}


bool destroyedShip(bool player, int row, int colm)
{
    bool destroy;
    if (!player)
    {
        if (enemyBoard[row][colm] == ship)
        {
            for (int i = 0; i < 10; i++)
            {
                destroy = true;
                int startRow = enemyShipinfo[i].ShipStartRow;
                int startColm = enemyShipinfo[i].ShipStartColm;
                int size = enemyShipinfo[i].ShipSize;
                int direction = enemyShipinfo[i].Direction;
                int end;

                if (direction == 1)  //-------
                {
                    end = startColm + size;
                    for (int j = startColm; j < end; j++)
                    {
                        if (enemyBoard[startRow][j] == ship && playerAttack[startRow][j] != Hit)
                        {
                            destroy = false;
                            break;
                        }
                    }
                    if (destroy)
                    {
                        for (int j = startColm; j < end; j++)
                            playerAttack[startRow][j] = destroyShip;

                        
                        if (startColm - 1 >= 0)
                        {
                            for (int j = startColm - 1; j < end; j++)
                            {
                                if (startRow - 1 >= 0 && playerAttack[startRow - 1][j] != mis)
                                    playerAttack[startRow - 1][j] = dot;
                                if (startRow + 1 < 10 && playerAttack[startRow + 1][j] !=mis)
                                    playerAttack[startRow + 1][j] = dot;
                            }
                            if(playerAttack[startRow][startColm - 1] != mis)
                              playerAttack[startRow][startColm - 1] = dot;
                        }
                        if (end  < 10)
                        {
                            for (int j = startColm; j <end+1; j++)
                            {
                                if (startRow - 1 >= 0 && playerAttack[startRow - 1][j] !=mis )
                                    playerAttack[startRow - 1][j] = dot;
                                if (startRow + 1 < 10 && playerAttack[startRow + 1][j] != mis)
                                    playerAttack[startRow + 1][j] = dot;
                            }
                            if (playerAttack[startRow][end] != mis)
                             playerAttack[startRow][end] = dot;
                        }
                        

                        


                        AllShipEnemy--;
                        return true;
                    }
                }
                else
                {
                    end = startRow + size;
                    for (int j = startRow; j < end; j++)
                    {
                        if (enemyBoard[j][startColm] == ship && playerAttack[j][startColm] != Hit)
                        {
                            destroy = false;
                            break;
                        }
                    }
                    if (destroy)
                    {
                        for (int j = startRow; j < end; j++)
                            playerAttack[j][startColm] = destroyShip;

                      
                        if (startRow - 1 >= 0)
                        {
                            for (int j = startRow - 1; j < end; j++)
                            {
                                if (startColm - 1 >= 0 && playerAttack[j][startColm - 1] != mis)
                                    playerAttack[j][startColm-1] = dot;
                                if (startColm + 1 < 10 && playerAttack[j][startColm+1] != mis)
                                    playerAttack[j][startColm + 1] = dot;
                            }
                            if (playerAttack[startRow-1][startColm] != mis)
                                playerAttack[startRow-1][startColm] = dot;
                        }
                        if (end < 10)
                        {
                            for (int j = startRow; j < end + 1; j++)
                            {
                                if (startColm - 1 >= 0 && playerAttack[j][startColm - 1] != mis)
                                    playerAttack[j][startColm - 1] = dot;
                                if (startColm + 1 < 10 && playerAttack[j][startColm + 1] != mis)
                                    playerAttack[j][startColm + 1] = dot;
                            }
                            if (playerAttack[end][startColm] != mis)
                                playerAttack[end][startColm] = dot;
                        }



                        AllShipEnemy--;
                        return true;
                    }
                }
            }
        }
    }
    else if (player)
    {
        if (playerBoard[row][colm] == ship)
        {
            for (int i = 0; i < 10; i++)
            {
                destroy = true;
                int startRow = playerShipinfo[i].ShipStartRow;
                int startColm = playerShipinfo[i].ShipStartColm;
                int size = playerShipinfo[i].ShipSize;
                int direction = playerShipinfo[i].Direction;
                int end;

                if (direction == 1)
                {
                    end = startColm + size;
                    for (int j = startColm; j < end; j++)
                    {
                        if (playerBoard[startRow][j] == ship && enemyAttack[startRow][j] != Hit)
                        {
                            destroy = false;
                            break;
                        }
                    }
                    if (destroy)
                    {
                        for (int j = startColm; j < end; j++)
                            enemyAttack[startRow][j] = destroyShip;

                        AllShipPlayer--;
                        return true;
                    }
                }
                else
                {
                    end = startRow + size;
                    for (int j = startRow; j < end; j++)
                    {
                        if (playerBoard[j][startColm] == ship && enemyAttack[j][startColm] != Hit)
                        {
                            destroy = false;
                            break;
                        }
                    }
                    if (destroy)
                    {
                        for (int j = startRow; j < end; j++)
                            enemyAttack[j][startColm] = destroyShip;

                        AllShipPlayer--;
                        return true;
                    }
                }
            }
        }
    }
    return false;
}



bool chekWinner()
{
	if (AllShipEnemy == 0)
	{
		system("cls");
        LastMenuLogo_player();
        return true;
	}
	else if (AllShipPlayer == 0)
	{
		system("cls");
        LastMenuLogo_enemy();
        return true;
	}
    return false;
}