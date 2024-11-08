#pragma once
enum Direction
{
    UP = 72,
    LEFT = 75,
    RIGHT = 77,
    DOWN = 80
};
struct ShipInfo {
    int ShipStartRow;
    int ShipStartColm;
    int ShipSize;
    int Direction;
};
void setColor(int text, int background) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void gotoXY(int x, int y) {
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
 //----------------------------------{Prototypes}-------------------------------------------//
void firstMenuLogo();
void moveableFirstMenu();
void secondMenuLogo();
void LastMenuLogo_player();
void LastMenuLogo_enemy();
void secondMenu(int);
void init2Darray();
void delete2Darray();
void placementInEnemy();
void placementInPlayer();
void showGrid(bool);
bool areAdjacentsCellsEmpty(bool, int, int, int, int);
void moveShip(Direction(dir), int& , int& , int& , int );
void moveinBoard(Direction(dir), short int&, short int&);
void waitingProcess();
void playerMovementinEnemy();
void enemyMovementinPlayer();
bool destroyedShip(bool, int, int);
bool chekWinner();
//-------------------------------------------------------------------------------------------//


//----------------------------------{Gloabal Variables}--------------------------------------//
bool isWar = false;
const int sizeBoard= 10; 
char** playerBoard = new char*[10];
char** enemyBoard = new char* [10];
char** playerforMovement = new char* [10];
char** enemyforMovement = new char* [10];
char** playerAttack = new char* [10];
char** enemyAttack = new char* [10];
ShipInfo playerShipinfo[sizeBoard];
ShipInfo enemyShipinfo[sizeBoard];
char water = ' ';
char ship = 'G';
char moveableShip = '#';
char cursor = '*';
char Hit = 'h';
char mis = 'm';
char destroyShip = 'd';
char dot = '.';
bool randomPlace = false;
bool reng=true;
bool isFirstHit = true;
bool smartBot = true;
bool shipDirection = false;
bool lastHitSuccess = false;
int hitCount = 0;
int currentSuccsessRow;
int currentSuccsessColm;
int smartDirection;
int lastHitSuccessColm;
int lastHitSuccessRow;
int AllShipEnemy = 10;
int AllShipPlayer = 10;
int playerOrenemy = 0;
//--------------------------------------------------------------------------------------------//