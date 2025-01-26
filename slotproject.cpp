#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    string question;
    int balance = 10;
    srand(time(0));

    //testing
    cout << "Hello! Your balance is: $" << balance << " to play it costs $1. Would you like to play or exit? (Y to Play, N to exit )" << endl;
    getline(cin, question);

        while(question == "Y" && balance > 0){
            balance = balance - 1;

            char characterlist[] = {'7', '$', '#', 'X'};

            
            int num1 = rand() % 4;
            char slot1 = characterlist[num1];
            int num2 = rand() % 4;
            char slot2 = characterlist[num2];
            int num3 = rand() % 4;
            char slot3 = characterlist[num3];

            if(slot1 == slot2 && slot1 == slot3 && slot2 == slot3){
                if(slot1 == '7'){
                    balance = balance + 100;
                }
                else if(slot1 == '$'){
                    balance = balance + 50;
                }
                else if(slot1 == '#'){
                    balance = balance + 25; 
                }
                else if(slot1 == 'X'){
                    balance = balance + 10;
                }
                cout << "You won! Your balance is now: " << balance << " Your combination was: " << slot1 << slot2 << slot3 << endl;
                }
            else if(balance == 0){
                cout<< "Your combination was: " << slot1 << slot2 << slot3 << endl;
                cout<< " " << endl;
                cout << "You are now out of balance" << endl;
                cout<< " " << endl;
                break;
            }
            else{
                cout<< "Your combination was: " << slot1 << slot2 << slot3 << " Your balance is now: " << balance << endl;
                cout<< " " << endl;
                cout<<"Try again? (Y for Yes, N for No)"<< endl;
                getline(cin, question);
            }
            while(question != "Y" && question != "N"){
                cout << "Invalid character, try again (Y for Yes, N for No)" << endl;
                getline(cin, question);
        }
    }
    
    cout << "Thanks for playing!" << endl;
    cout<< " " << endl;
    return 0;
}