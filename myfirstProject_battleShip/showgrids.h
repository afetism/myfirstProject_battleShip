#pragma once
void showGrid(bool enemyBoardVisable)
{
    system("cls");
   
    cout << endl;
    cout<<"\t  PLAYER";
    if (enemyBoardVisable != true)
        cout << endl;
    if(enemyBoardVisable == true)
        cout << "\t\t\t    "<<"ENEMY"<<endl;
    cout <<WHITE<<"   1 2 3 4 5 6 7 8 9 10";
    if (enemyBoardVisable == true)
    { 
        
       
        cout << WHITE << "\t\t    1 2 3 4 5 6 7 8 9 10";
    }

    cout << WHITE << "\n  " << (char)218; for (int i = 0; i < 9; i++) { cout << (char)196 << (char)194; } cout << (char)196 << (char)191;

    if (enemyBoardVisable == true)
    {
        cout << "\t\t   ";
        cout << char(218);
        for (int i = 0; i < 9; i++) {
            cout << WHITE<< char(196) << char(194);
        }

    }

    cout << WHITE << char(196) << char(191) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << WHITE << " " << char('A' + i);
        cout << WHITE << char(179);

        for (int j = 0; j < 10; j++)
        {
            if (!isWar)
            {
                if (playerBoard[i][j] == water && playerforMovement[i][j] == water)
                    j < 9 ? (cout << " " << " ") : (cout << " ");
                else if(playerBoard[i][j] == water && playerforMovement[i][j] == moveableShip)
                {
                    if(reng)
                     j < 9 ? (cout <<GREEN<<(char)237 << " ") : (cout <<GREEN<<(char)237); 
                    else
                    {
                        j < 9 ? (cout << RED << (char)237 << " ") : (cout << RED << (char)237);
                        cout << "\a";
                    }
                }
                else if (playerBoard[i][j] == ship && playerforMovement[i][j] == moveableShip)
                {
                    j < 9 ? (cout << RED << (char)237 << " ") : (cout << RED << (char)237);
                    cout << "\a";
                }
                else if(playerBoard[i][j] == ship && playerforMovement[i][j] == water)
                    j < 9 ? (cout << BOLDBLUE <<(char)237 << " ") : (cout << BOLDBLUE <<(char)237);

            }
            else
            {
                

                if (enemyAttack[i][j] == Hit && playerforMovement[i][j] == water)
                {
                    j < 9 ? (cout << RED <<"H" << " ") : (cout << RED <<"H");
                }
                else if (enemyAttack[i][j] == mis && playerforMovement[i][j] == water)
                    j < 9 ? (cout<<BLUE<< "M" << " ") : (cout << BLUE << "M");
                else if (enemyAttack[i][j] == destroyShip && playerforMovement[i][j] == water)
                    j < 9 ? (cout  <<MAGENTA << "G" << " ") : (cout << MAGENTA << "G");
                else if(playerBoard[i][j] == water && playerforMovement[i][j] == water)
                    j < 9 ? (cout << " " << " ") : (cout << " ");
                else if(playerBoard[i][j] == ship && playerforMovement[i][j] == water)
                    j < 9 ? (cout <<WHITE<<(char)237 << " ") : (cout <<WHITE<<(char)237);

                
            }
        }
        cout << WHITE << char(179);

        if (enemyBoardVisable == true)
        {
            cout << "\t\t ";
            cout << WHITE << " " << char('A' + i);
            cout << WHITE << char(179);
            for (int j = 0; j < 10; j++)
            {

                if (enemyforMovement[i][j] == cursor && playerAttack[i][j] == water)
                    j < 9 ? (cout <<WHITE<<"O"<< " ") : (cout << WHITE << "O");
                else if (playerAttack[i][j] == mis)
                    j < 9 ? (cout <<BLUE<<"M" << " ") : (cout<<BLUE<< "M");
                else if (playerAttack[i][j] == Hit)
                    j < 9 ? (cout <<RED<<"H" << " ") : (cout <<RED<<"H");
                else if (playerAttack[i][j] == destroyShip)
                    j < 9 ? (cout << MAGENTA <<"G" << " ") : (cout << MAGENTA << "G");
                else if (playerAttack[i][j] == dot)
                    j < 9 ? (cout << WHITE << "." << " ") : (cout << WHITE << ".");
                else
                    j < 9 ? (cout << " " << " ") : (cout << " ");
                

            }
            cout << WHITE << char(179);
        }
        
        cout << endl;
    }
    cout << "  ";
    cout << WHITE << char(195);
    for (int i = 0; i < 10; i++) {
        i != 9 ? (cout << WHITE << char(196) << char(193)) : (cout << char(196));
    }
    cout << char(217);
    if (enemyBoardVisable == true)
    {
        cout << "\t\t ";
        cout << WHITE << "  ";
        cout << WHITE << char(195);
        for (int i = 0; i < 10; i++) {
            i != 9 ? (cout << WHITE << char(196) << char(193)) : (cout << WHITE << char(196));
        }
        cout << WHITE << char(217);
    }
    if (reng == false)
        cout << endl << "Cheak your ship's place";
    if (enemyBoardVisable == true)
    {
        cout << endl << "     Player ships:"<< AllShipPlayer<<"\t\t       Enemy ships:"<< AllShipEnemy;
    }
}