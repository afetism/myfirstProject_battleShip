#pragma once
void firstMenuLogo()
{

    char* menuLogo = new char[] {
        R"(
                   
         ______       _   _   _            _     _         
         | ___ \     | | | | | |          | |   (_)        
         | |_/ / __ _| |_| |_| | ___   ___| |__  _ _ __    
         | ___ \/ _` | __| __| |/ _ \ / __| '_ \| | '_ \   
         | |_/ | (_| | |_| |_| |  __/ \__ | | | | | |_) |  
         \____/ \__,_|\__|\__|_|\___| |___|_| |_|_| .__/   
                                                  | |      
                                                  |_|      
                                                             by A.Ismayilova
     )"};

  
    cout <<RED<<menuLogo;
    delete[] menuLogo;
}
void LastMenuLogo_player()
{
    system("color F0");
    char* menuLogo = new char[] {
        R"(

            
            
     __     __                           __          ___                       _ 
     \ \   / /                           \ \        / (_)                     | |
      \ \_/ /__  _   _    __ _ _ __ ___   \ \  /\  / / _ _ __  _ __   ___ _ __| |
       \   / _ \| | | |  / _` | '__/ _ \   \ \/  \/ / | | '_ \| '_ \ / _ \ '__| |
        | | (_) | |_| | | (_| | | |  __/    \  /\  /  | | | | | | | |  __/ |  |_|
       _|_|\___/ \__,_|  \__,_|_|  \___|_    \/  \/_  |_|_| |_|_| |_|\___|_|  (_)
      / ____|                          | |        \ \                            
     | |     ___  _ __   __ _ _ __ __ _| |_ ___  (_) |                           
     | |    / _ \| '_ \ / _` | '__/ _` | __/ __|   | |                           
     | |___| (_) | | | | (_| | | | (_| | |_\__ \  _| |                           
      \_____\___/|_| |_|\__, |_|  \__,_|\__|___/ (_) |                           
                         __/ |                    /_/                            
                        |___/                                                    
                  
        

)"
    };
    cout << RED << menuLogo;
    delete[] menuLogo;

}
void  LastMenuLogo_enemy()
{
    system("color F0");
    char* menuLogo = new char[] {
        R"(
            
                
               
         
     __     __           _           _   _                                   
     \ \   / /          | |         | | | |                                  
      \ \_/ /__  _   _  | | ___  ___| |_| |                                  
       \   / _ \| | | | | |/ _ \/ __| __| |                                  
        | | (_) | |_| | | | (_) \__ \ |_|_|                                  
       _|_|\___/ \__,_| |_|\___/|___/\__(_)             _       _          __
      | |  | |      / _|         | |                   | |     | |      _ / /
      | |  | |_ __ | |_ ___  _ __| |_ _   _ _ __   __ _| |_ ___| |_   _(_) | 
      | |  | | '_ \|  _/ _ \| '__| __| | | | '_ \ / _` | __/ _ \ | | | | | | 
      | |__| | | | | || (_) | |  | |_| |_| | | | | (_| | ||  __/ | |_| |_| | 
       \____/|_| |_|_| \___/|_|   \__|\__,_|_| |_|\__,_|\__\___|_|\__, (_) | 
                                                                   __/ |  \_\
                                                                  |___/      
    

        

)"
    };
    cout << RED << menuLogo;
    delete[] menuLogo;
}
void waitingProcess()
{
    char menu[] = {
        R"(                                                                                                                                
                                                                                                                                                
                                                          +:                                   
                                                        .%#                                    
                                                        .=*                                    
                                                         -%+.                                  
                                                         *==#                                  
                                                         #::%                                  
                                                        -=:-+-                                 
                                                        +.=:.+                                 
                                                        #=#*=#                                 
                                                       .*:*=.*.  :**=                          
                                               :#*=   %@@%%%%@@= :@%+                          
                                                -* :--%%%%%%%%@**-@@-                          
                                                 **#*%@@@@@@@@@@@@@@@@                         
                                                --=@-:#@*:=@@::@::@@@@-                        
       :--:.          .-:::--:::::::::::....  :=.:@*  %@+ -@@  @. %@@@=                 .*---+=
       .#--=#          -: .+@-:=:..=++#+++*+ *@@@@@@@@@@@@@@@@%@@%@@@@*                 *@@@@@:
      =*# . =:.*#=      =@@@%@@@@@@@@@@@@@@@@@@@@@@@@%%%%%@@@@@@@@@@@@%         .=*==+ ==.:-.. 
      #@%%#@@%#*%%+.%-% -@@@*:*@%+:#@*-*@%++%@@@@@@@@*%#%##%@@@@@@@@@@@@.         .#==+:=       
       :%%%###%%%@@@%#%+%%%%##@@@%%@@%#%@@**%@@@@@@@@#@%%%*@@@@@@@@@@@@@-   .    :*---*#-       
        =@@@@@@@@@%%%%%%%%%%%@%%%##%%%%%%%%%%@%%%@%@@%####@@@@@@@@@@@@@@+.=*#=.:%%%%%%%%@.      
         %@@@@@@@@@@@@@@@@@@@%%%%**%%%%%%%%**%%%%%%%%#*%%%%%%%%@#%%%%%%%%*#%%%%%%%%%%%%%+.      
          :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%@@@@@@@@@#@@@@@@@@%@@@@@@@@@@@@*:        
           
     
 
       )"
    };

    for (int i = 0; i < 110; i += 10)
    {
        Sleep(300);
        system("cls");
        cout << menu;
        cout << "\t\t\t";
        for (int k = 0; k < i / 2; k++)
            cout << "=";
        cout << endl;

        cout << "\t\t\t\t" << "Loading...";
        cout << i << "%" << endl;
        cout << "\t\t\t";
        for (int k = 0; k < i / 2; k++)
            cout << "=";

        if (i == 100)
        {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n";
            cout <<"\t\t\t\t\t\t\t" << "Game started.";
            Sleep(20);
            cout << ".";
            Sleep(20);
            cout << ".";
            Sleep(1000);
        }

    }
}


void about()
{
    system("cls");
    const char* aboutTitle = " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ About Battleship Game ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
    const char* aboutText = R"(
   Welcome to the Battleship game, a classic naval strategy game where your tactical skills are put to the test. 
   Your mission is to sink your opponent's fleet before they sink yours. Here's what the signs mean in the game:
   )";
    const char* str0 = " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Signs ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
    const char* pointerToHit = " Sign: Pointer to Hit - Marks a coordinate to hit an enemy ship.";
    const char* shipHit = " Sign: Ship Hit - Indicates a part of an enemy ship that has been hit.";
    const char* shipDowned = " Sign: Ship Downed - Shows a completely sunken enemy ship.";
    const char* missedHits = " Sign: Missed Hits - Marks coordinates where your shots missed.";
    const char* instructions = "Use your strategic wit to eliminate your opponent's fleet \nwhile protecting your own. Fire your shots wisely, and may the best admiral win!";
    const char* sizeNote = "Battleship - Version 1.59";
    for (int i = 0; aboutTitle[i] != '\0'; i++)
    {
        cout << aboutTitle[i];
        if (_kbhit())
        {
            system("cls");
            cout << aboutTitle << endl;
            break;
        }
        Sleep(40);
    }
    cin.ignore();
    for (int i = 0; aboutText[i] != '\0'; i++)
    {
        cout << aboutText[i];
        if (_kbhit())
        {
            system("cls");
            cout << aboutTitle << endl << endl;
            cout << aboutText << endl;
            break;
        }
        Sleep(40);
    }
    cin.ignore();
    cout << endl;

    for (int i = 0; str0[i] != '\0'; i++)
    {
        cout << str0[i];
        if (_kbhit())
        {
            system("cls");
            cout << aboutTitle << endl << endl;
            cout << aboutText << endl << endl;
            cout << endl << str0 << endl;
            break;
        }
        Sleep(40);
    }
    cin.ignore();
    for (int i = 0; pointerToHit[i] != '\0'; i++)
    {
        cout << pointerToHit[i];
        if (_kbhit())
        {
            system("cls");
            cout << aboutTitle << endl << endl;
            cout << aboutText << endl << endl;
            cout << endl << str0 << endl;
            cout << pointerToHit;

            break;
        }
        Sleep(40);
    }
    cin.ignore();


    for (int i = 0; shipDowned[i] != '\0'; i++)
    {
        cout << shipDowned[i];
        if (_kbhit())
        {
            system("cls");
            cout << aboutTitle << endl << endl;
            cout << aboutText << endl << endl;
            cout << endl << str0 << endl;
            cout << shipDowned << endl;
            cout << endl << "\'" << "O" << '\'' << pointerToHit << endl;
            cout << endl << "\'" << "H" << '\'' << shipHit << endl;
            cout << endl << "\'" << "G" << '\'' << shipDowned << endl;


            break;
        }
        Sleep(40);
    }
    cin.ignore();

    for (int i = 0; missedHits[i] != '\0'; i++)
    {
        cout << missedHits[i];
        if (_kbhit())
        {
            system("cls");
            cout << aboutTitle << endl << endl;
            cout << aboutText << endl << endl;
            cout << endl << str0 << endl;
            cout << endl << "\'" << "O" << '\'' << pointerToHit << endl;
            cout << endl << "\'" << "H" << '\'' << shipHit << endl;
            cout << endl << "\'" << "G" << '\'' << shipDowned << endl;
            cout << endl << "\'" << "M" << missedHits << endl;
            break;
        }
        Sleep(40);
    }
    cin.ignore();

    for (int i = 0; instructions[i] != '\0'; i++)
    {
        cout << instructions[i];
        if (_kbhit())
        {
            system("cls");
            cout << aboutTitle << endl << endl;
            cout << aboutText << endl << endl;
            cout << endl << str0 << endl;
            cout << shipDowned << endl;
            cout << endl << "\'" << "O" << '\'' << pointerToHit << endl;
            cout << endl << "\'" << "H" << '\'' << shipHit << endl;
            cout << endl << "\'" << "G" << '\'' << shipDowned << endl;
            cout << endl << "\'" << "M" << '\'' << missedHits << endl;
            cout << endl << instructions << endl;
            break;
        }
        Sleep(40);
    }
    cin.ignore();

    cout << " \n\t\t\t\t\t\t" << char(169);
    for (int i = 0; sizeNote[i] != '\0'; i++)
    {
        cout << sizeNote[i];
        if (_kbhit())
        {
            system("cls");
            cout << aboutTitle << endl << endl;
            cout << aboutText << endl << endl;
            cout << endl << str0 << endl;
            cout << shipDowned << endl;
            cout << endl << "\'" << "O" << '\'' << pointerToHit << endl;
            cout << endl << "\'" << "H" << '\'' << shipHit << endl;
            cout << endl << "\'" << "G" << '\'' << shipDowned << endl;
            cout << endl << "\'" << "M" << '\'' << missedHits << endl;
            cout << endl << instructions << endl;
            cout << endl << " \n\t\t\t\t\t\t " << char(169) << sizeNote << endl;
            break;
        }
        Sleep(40);
    }
    cout << RED << endl << "Press arrow button to exit' " << WHITE << endl;
    int num = _getch();
    if(num == 8)
       return;
}
void firstMenu(int choose)
{
    char* str1 = new char[] {"New game"};
    char* str2 = new char[] {"How to Play"};
    char* str3 = new char[] {"Exit"};
    char** str = new char* [3] {str1, str2, str3};
    for (int i = 0; i < 3; i++)
    {
        if(i==choose)
        {
            setColor(0, 15); cout << "\t\t\t\t"<<RED << str[i]; setColor(15, 0);
            
            
        }
        else
        {
         
            cout << "\t\t\t\t" <<WHITE<<str[i];
        }
        
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
        delete[] str[i];
     
    delete[] str;
	
}
void secondMenuLogo()
{
    cout << RED << "Weclome to BattleShips!" << endl;;
    cout << "Would you like ships to be places Random or Manual? " << endl<<endl;
}
void secondMenu(int choose)
{
    char* str1 = new char[] {"Randomly"};
    char* str2 = new char[] {"Manualy"};
    char** str = new char*[2] {str1, str2};
    for (int i = 0; i <2; i++)
    {
        if (i == choose)
        {
            setColor(0, 15); cout << "\t" << RED << str[i]; setColor(15, 0);


        }
        else
        {

            cout << "\t" << WHITE << str[i];
        }

        cout << endl;
    }
    for (int i = 0; i < 2; i++)
        delete[] str[i];

    delete[] str;

}

void init2Darray()
{
    for (int i = 0; i < sizeBoard; i++)
    {
        playerBoard[i] = new char [sizeBoard];
        enemyBoard[i] = new char [sizeBoard];
        playerforMovement[i] = new char [sizeBoard];
        enemyforMovement[i] = new char [sizeBoard];
        playerAttack[i] = new char [sizeBoard];
        enemyAttack[i] = new char [sizeBoard];
    }
}
void delete2Darray()
{
    for (int i = 0; i < sizeBoard; i++)
    {
        delete[] playerBoard[i];
        delete[] enemyBoard[i];
        delete[] playerforMovement[i];
        delete[] enemyforMovement[i];
        delete[] playerAttack[i];
        delete[] enemyAttack[i];

    }
    delete playerBoard;
    delete enemyBoard;
    delete playerforMovement;
    delete enemyforMovement;
    delete playerAttack;
    delete enemyAttack;
}