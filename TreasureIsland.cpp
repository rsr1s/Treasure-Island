#include <iostream>
using namespace std;

int main(){
    cout<<"*******************************************************************************"<<endl;
    cout<<"Welcome to Treasure Island."<<endl;
    cout<<"*******************************************************************************"<<endl;
    cout<<"Your mission is to find the treasure."<<endl;
    // case 1
    cout<<"You\'re at a cross road. Where do you want to go? Type \"left\" or \"right\"."<<endl;
    string ch;
    cout<<"> ";
    cin>>ch;
    if(ch=="left"){
        // case 2
        cout<<"You've come to a lake. There is an island in the middle of the lake. Type \"wait\" to wait for a boat. "
          "Type \"swim\" to swim across."<<endl;
          cout<<"> ";
          cin>>ch;
        if (ch=="wait"){
            // case 3
            cout<<"You arrive at the island unharmed. There is a house with 3 doors. One \"red\", one \"yellow\" and one \"blue\". Which colour do you choose?"<<endl;
            cout<<"> ";
            cin>>ch;
            if(ch=="red"){
                cout<<"It's a room full of fire.";
            }
            else if(ch=="yellow"){
                cout<<"You found the treasure! "<<endl;
                cout<<"You win!";
            }
            else if(ch=="blue"){
                cout<<" You enter a room of beasts.";
            }
            else{
                cout<<"You chose a door that doesn't exist.";
            }
        }
        else{
            cout<<"You get attacked by an angry trout."<<endl;
        }
    }
    else{
        cout<<"You fell into a hole.";
    }
    return 0;
}