/*
Q2.1 A robot is placed in a 2 dimentional array. Robot can make four moved ( R- Right, L - Left, U - Up, D - Down).
All the moves are valid, if the Robot can come to the origitnal position.
For example if the moves are  RLRLUD then it is vlaid.
If the moves are RRLU .. invalid.

Wite a function to accpet the moves of robot as string and return True ot False .

*/

#include <iostream>
#include<string> // for string class
#include <cstring>

using namespace std;
void robotcommand(char*); //function definition
int length; //global var

int main() {
    char command[100]; //what if a need bigger sequence?
    cout<<"Enter robot commands: ";
    cin.get(command,100,'\n');
    length = (unsigned)strlen(command);
    robotcommand(command);
    return 0;
}

void robotcommand(char c[]){ //function declaration
    int x=0; //robot initial position is [0][0]
    int y = 0; 
    int i=0;
    int comandrange;
    int path[2][2]; //path is a 2 dimensional array
    
    cout<<"Robot commands are: "<<c<<endl;
    //cout<<"First command:"<<c[i]<<endl;
    //cout<<"Command length is:"<<length<<endl;
    
    while(i<length){
        switch(c[i]){
            case 'R':
                y++; //step RIGTH
                path[x][y]; //new robot position
                i++; //read next coomand
                break;
            case 'L':
                y--;//step LEFT
                path[x][y];
                i++;
                break;
            case 'U':
                x--;//step UP
                path[x][y];
                i++;
                break;
            case 'D':
                x++;//step DOWN
                path[x][y];
                i++;
                break;
            default:
                cout << "not a valid command"<< endl;
                i++;
                break;
        }
    }
    
    cout<<"Robot final position is: "<<x<<','<<y<<endl;
    
    if ((x==0) && (y==0))
        cout<<"TRUE; Robot its at the origin:"<<endl;
    else
        cout<<"FALSE; Robot its not at the origin:"<<endl;
    
}




Language Version:  GCC 8.1.0
