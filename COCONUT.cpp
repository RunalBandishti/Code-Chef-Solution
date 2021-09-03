##Question:


Chefland has 2 different types of coconut, type A and type B. Type A contains only xa milliliters of coconut water and type B contains only xb grams of coconut pulp. Chef's nutritionist has advised him to consume Xa milliliters of coconut water and Xb grams of coconut pulp every week in the summer. Find the total number of coconuts (type A + type B) that Chef should buy each week to keep himself active in the hot weather.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, four integers xa, xb, Xa, Xb.
Output
For each test case, output in a single line the answer to the problem.


##Solution

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,x1,x2,y1,y2,sum1,sum2,sum;
	cin>>T;
	
	while(T--)
	{
	cin>>x1>>x2>>y1>>y2;
	sum1=y1/x1;
	sum2=y2/x2;
	sum=sum1+sum2;
	cout<<sum<<endl;
	}
	
	return 0;
}
