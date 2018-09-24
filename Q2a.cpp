/*
Q2. A robot is placed in a 2 dimentional array. Robot can make four moved ( R- Right, L - Left, U - Up, D - Down).
All the moves are valid, if the Robot can come to the origitnal position.
For example if the moves are  RLRLUD then it is vlaid.
If the moves are RRLU .. invalid.

Wite a function to accpet the moves of robot as string and return True ot False .

*/

#include <iostream>
#include<string> // for string class

using namespace std;

int main() {
    
    int x=0; //robot initial position is [0][0]
    int y = 0; 

    int path[2][2]; //path is already deafined, is a 2 dimensional array
    
    char command[] = {'R','R','L','U'}; //user will input these comands
    
    
    int i=0;
    
    while(i<4){
        switch(command[i]){
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
                cout << "not valid command"<< endl;
                break;
        }
    }
    
    cout<<"Robot final position is: "<<x<<','<<y<<endl;
    
    if ((x==0) && (y==0))
        cout<<"TRUE"<<endl;
    else
        cout<<"FALSE"<<endl;
    
    return 0;
}
