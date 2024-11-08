// myfirstProject_battleShip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include<conio.h>
#include <locale>
using namespace std;
#define RED "\033[31m" 
#define WHITE   "\033[37m"
#define GREEN "\033[32m" 
#define BLUE "\033[34m" 
#define MAGENTA "\033[35m"
#define BOLDBLUE    "\033[1m\033[34m" 
#include"Prototype.h"
#include"Screens.h"
#include"moveableMenu.h"
#include"showgrids.h"
#include"placeship.h"
#include"chekings.h"
#include"movementforShips.h"
#include"playerMove.h"
#include"enemyMove.h"
int main()
{
    srand(time(0));
    system("mode con cols=80 lines=25");
    init2Darray();
    for (int i = 0; i < sizeBoard; i++)
    {
        for (int j = 0; j < sizeBoard; j++)
        {
            playerBoard[i][j] = water;
            enemyBoard[i][j] = water;
            playerforMovement[i][j] = water;
            enemyforMovement[i][j] = water;
            playerAttack[i][j] = water;
            enemyAttack[i][j] = water;
        }
    }
    
        


    firstMenuLogo();
    moveableFirstMenu();
  
    delete2Darray();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
