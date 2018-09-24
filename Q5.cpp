/*Q5. Write a program to find all the prime numbers between 0 and 100.*/

/*
A prime number is divisible between itself and one. A primer number is divisible by only 2 natural numbers; 
1 is not a prime number
*/
  
#include <iostream>

using namespace std;

int main() {
	int i;
	int j;
	int count = 0;
	
	//prime 2,3,5,7 composite 4,6,8,9,10
	for (i=2; i<100; i++){ //dividend
	    for(j=1; j<100; j++){ //divisor
	          if(i%j == 0){ //2%1=0, 2%2=0, 2/3=not zero, prime number only 2 zeros
	            count++;
	          }
	    }
	    if(count == 2){ //2 remainder of 0, we had found a prime number!
	       cout<< i <<"\n"; //output prime number
	    }
	    count=0; //reset counter
	}
}
