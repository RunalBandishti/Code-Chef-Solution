Given n (n is even), determine the number of black cells in an n×n chessboard.

Input Format
The only line of the input contains a single integer n.

Output Format
Output the number of black cells in an n×n chessboard.

Constraints
2≤n≤100
n is even
Sample Input 1 
8
Sample Output 1 
32

There are 32 black cells and 32 white cells in an 8×8 chessboard. So the answer is 32.

#############################################

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int no,prod,ans;
	cin>>no;
	prod=no/2;
	ans=no*prod;
	cout<<ans;
	
	return 0;
}
