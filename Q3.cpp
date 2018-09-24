/*
Q3: Implement a C++ Class with the follwoing data memers:
char * name 
int age
*/

#include <iostream>

using namespace std;

class student{
        char*name; //pointer declaration
        int age;
    public:
        void set_credentials(char, int);//function declaration
        int age_(){return age;}
        char ID() {
            return *name;//point name memory address
        }
};

void student::set_credentials(char name_,int a){ //function definition
    name = &name_;//name is holding the address of name_ (pointer initialization)
    age = a;
}

int main() {
    student stdt; //stdt is an object of the class student
    stdt.set_credentials ('C',17);
    cout << "Age: " << stdt.age_()<<endl;
    cout << "Class: " << stdt.ID()<<endl;
    return 0;
}

