Chef is a very lazy person. Whatever work is 
supposed to be finished in x units of time, he finishes it in m∗x units of time. But there is always a limit to laziness, so he delays the work by at max d units of time. Given x,m,d, find the maximum time taken by Chef to complete the work.

Input:
First line will contain T, number of testcases.
 Then the testcases follow.
Each testcase contains a single line of
 input, three integers x,m,d.
Output:
For each testcase, output in a single line 
answer to the problem.


Solution:


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,x,m,d,sum,sum1;
	cin>>T;
	
	while(T--){
	    cin>>x>>m>>d;
	    sum=x*m;
	    sum1=x+d;
	    if(sum < sum1){
	        cout<<sum<<endl;
	    }
	    else{
	        cout<<sum1<<endl;
	    }
	}
	return 0;
}
