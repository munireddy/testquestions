/*
Q6. An array of size n is filled with intergers 1 to n+1. Write fucntion to find the missing number between 1 and n+1.
example : inputarry[6] = {1,2,3,5,6,7}
Here the last number should have been 6. But it is 7 because we skipped 4.
*/

#include <iostream>

using namespace std;

int n[6]={1,2,4,5,6,7};

int length = sizeof(n)/sizeof(int); //length of an integer array

/*function declaration*/
int missingnumber(int n[]);

/*function definition*/
int missingnumber(int n[]){
        
        int i = 0;
        int result;
        
        //5 is the max index of n[] lenght=6
        while(i<length){ //array range
            
            if(n[i+1]-n[i] == 1){
                i++; //next comparision 
            }
            else if(n[i+1]-n[i] == 2){  
                result = n[i+1]-1; //result is the missing number
                i++;
            }
            else{
                //result never gets assigned
                i++;
            }
            
        }
        return result; //output last missing number
    }


int main() {
    
    int solution = missingnumber(n);
    
    cout<<"Missing number in n[] is: " << solution;
    
    return 0;
}
	

