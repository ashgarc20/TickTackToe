#include <iostream>
#include <string>
using namespace std; 

int main()
{ 
    // Going to start off by asking the player if it is player v. player or player v. computer 
    string gameMode;
    
    
    cout << " Hello! Welcome to Ash's Tick Tack Toe. " << endl;
    //cout << " Which Game Mode Would You Like to Play? \n";
    cout << " Option 1 : Player v. Player \n";
    cout << " Opiton 2 : Player v. Computer"<< endl; 
    
    // Now we are going to get the game mode option from user
    //cin >> gameMode;
    
    /* Checking gameMode value 
    cout << " Game mode value: " << gameMode; 
    */
    
    bool checkGameMode = false; // Bool is ONlY true or false
    // This means that what the user entered is false until it checks "do and While"
    do{ 
        cout << " Enter Game Mode: " << endl; 
        cin >> gameMode; 
        
        if (gameMode.compare("1") != 0 && gameMode.compare("2") != 0){
            cout << " Unvalid Input, Try Again." << endl;
        }
        else { 
            checkGameMode = true; 
        }
        
    }while (checkGameMode != true); 
    
    
    return 0;
}