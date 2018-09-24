/*
Q1. Write a fuction to implement mem copy function . 
    input : char * src
    output : char * dest 
    don't use library funtions. Allocate memory for  dest in the the function
*/

#include <iostream>

using namespace std;
char wmemorycpy(char);

int main() {
    char arr = 'P';
    char new_arr; //new_arr is declared but not initialized, hence no memory space is assignated
    
    /*mem copy function*/
    new_arr = wmemorycpy(arr);
    
    cout << "After copying" << endl;
    //cout <<new_arr<< endl;
    cout <<new_arr<< endl;
    
    return 0;
}

/*
dest: Pointer to the memory location where the contents are copied to
src: Pointer to the memory location where the contents are copied from.
*/

char wmemorycpy(char scr_){
    /*Allocate memory for  dest in the the function*/
    char*scr; //source pointer declaration
    char*dest;//destination pointer declaration
    
    char source;//source variable 
    char destination;//destination variable
    
    /*arr is now inside the function */
    source=scr_;
    destination = source;
    
    /*pointers initialization*/
    scr=&source; //scr is a memory location (an address is assigned)
    dest=&destination;//dest is a memory location
    
   
    //copy from source to destination
    *dest=*scr; //pointer scr value assigned to pointer dest value
    
    return *dest;
}
