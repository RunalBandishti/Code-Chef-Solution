Write a program to obtain a number N and increment its value by 1
 if the number is divisible by 4 otherwise decrement its value by 1.

Input:
First line will contain a number N.
Output:
Output a single line, the new value of the number.



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num;
	cin>>num;
	
	if(num  % 4){
	    cout<<num-1;
	}
	else{
	    cout<<num+1;
	}
	return 0;
}
