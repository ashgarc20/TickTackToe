#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main()
{ 
    // Going to start off by asking the player if it is player v. player or player v. computer 
    string gameMode;
    string next;
    string gamerTags;
    string player1name;
    string player2name;
    
    
    
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
            // compare is availabe form the <iostream> function
            cout << " Unvalid Input, Try Again." << endl;
        }
        else { 
            checkGameMode = true; 
        }
        
    }while (checkGameMode != true); 
    
    // creating an option for the user to continue to play player v. player 
    //or exit because the player v. computer is not available.
    
    bool didUserContinue = false;
    
    if(gameMode.compare("2") ==0){
        // I am going to advise the user that player v. computer is not
        //available by opening a file and printing out the text and 
        //asking the user wheather they want to continue or exit
        string line;
        ifstream myfile("pc_under_construction.txt");
        if(myfile.is_open()){
        
            while(getline(myfile, line)){
                cout << line << endl;
            }
            myfile.close();
        }
        else {
            cout << "Unable to open file\n"; 
        }
        
        
        bool checkIfContinued = false;
        
        do {
            cin >> next;
            
            if (next.compare("continue") == 0){
                cout << "Player v. Player Activated!" << endl;
                
                checkIfContinued = true;
                didUserContinue = true;
            }
            else if (next.compare("exit") == 0){
                cout << "GoodBye!\n";
                exit(0);
            }    
            
            else {
                cout << "Please enter valid response:\n";
            }
        
        }while(checkIfContinued != true);
    }
    if(gameMode.compare("1") == 0 || didUserContinue){
        cout << "Great to have you! " << endl;
        
        
        cout << "Do you want default names or create custom names?\n";
        cout << "Enter 'default' or 'custom' :"<< endl;
        
        bool checkGamerTag = false;
        
        do {
            
            cin >> gamerTags;
            
            // Will add default names later //
            if (gamerTags.compare("default") == 0){
                cout << "Okay !" << endl;
                // we are going to add a file adding names for 
                // we can assign funny names to user like coke and pepsi
                
                checkGamerTag = true;
            }
            else if (gamerTags.compare("custom") == 0){
                cout << "Enter player's name using max 11 characters" << endl;
                // ask the user for name 1 and name 2
                checkGamerTag = true;
                
                cout << "Enter player one name:\n";
                cin >> player1name;
                // create a code to make sure the user met the requirements 
                // using the string length (max 11)and going through the array characters(a-z)
                
                cout << "Enter player two name: \n";
                cin >> player2name;
                // create a code to make sure the user met the requirements
                // using the string length (max 11) and going trough the array characters (a-z)
                
                
                player1name = player1name.substr(0,10); // substr(#,#) limits the character input
                player2name = player2name.substr(0,10);
                
                
                
                cout << "Player one name: "<< player1name << endl;
                cout << "player two name: " << player2name << endl;
            } 
            else {
                cout << "Not a valid response. Try again:" << endl;
            }
            
        }while(checkGamerTag != true);
    
 











        
    }
    

    
    return 0;
}