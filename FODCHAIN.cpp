A great deal of energy is lost as metabolic heat
 when the organisms from one trophic level 
are consumed by the next level.

Suppose in Chefland the energy reduces by 
a factor of K, i.e, if initially, the energy is X, then the transfer of energy to the next tropic level is ⌊XK⌋. This limits the length of foodchain which is defined to be the highest level receiving non-zero energy.

E is the energy at the lowest tropic level.
 Given E and K for an ecosystem, find the 
maximum length of foodchain.

Note: ⌊x⌋ denoted the floor function, and it returns the greatest integer that is less than or equal to x (i.e rounds down to the nearest integer). For example, ⌊1.4⌋=1, ⌊5⌋=5, ⌊−1.5⌋=−2, ⌊−3⌋=−3 , ⌊0⌋=0.

Input Format
First line will contain T, number of testcases. 
Then the testcases follow.
Each testcase contains a single line of input, 
two integers E,K.
Output Format
For each testcase, output in a single line 
answer to the problem


Solution:


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,num1,num2,cnt;
	cin>>T;
	
	while(T--){
	    cin>>num1>>num2;
	    while(num1 != 0){
	        cnt++;
	        num1 =num1/num2;
	        
	        
	    }
	    cout<<cnt<<endl;
	    cnt=0;
	}
	return 0;
}
