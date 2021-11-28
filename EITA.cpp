Chefland has 7 days in a week. Chef is very conscious about his work done during the week.

There are two ways he can spend his energy during the week.
  The first way is to do x units of work every day and the second way 
  is to do y (>x) units of work for the first d (<7) days and to do z (<x) units of work thereafter
  since he will get tired of working more in the initial few days.

Find the maximum amount of work he can do during the week if he is free to choose either of the two strategies.

Input
The first line contains an integer T, the number of test cases.
  Then the test cases follow.
Each test case contains a single line of input, four integers d, x, y, z.
Output
For each testcase, output in a single line the answer to the problem.





#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,d,x,y,z,sum,sum1;
	cin>>T;
	
	while(T--){
	    cin>>d>>x>>y>>z;
	    sum=x*7;
	    sum1=(d*y) + (z*(7-d));
	    if(sum > sum1){
	        cout<<sum<<endl;
	    }
	    else{
	        cout<<sum1<<endl;
	    }
	    
	}
	
	return 0;
}
