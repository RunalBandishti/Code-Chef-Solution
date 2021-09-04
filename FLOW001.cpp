Problem Statement


Every problem starts with a Problem Statement. It tells you in detail about the task to be solved. Usually, although not necessarily, it is accompanied with a story. As a competitive programmer, it is your job to break the problem statement and figure out exactly what it is asking.
Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

Input
This section tells you the format in which your program should receive the input.
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output
This section tells us the format in which your program should give the output
For each test case, add A and B and display the sum in a new line.

Take special care for the output format; everything your program prints is considered “output”, so if you output some debugging statements like “Please enter T” or print something like: “The answer is: ”, this will be considered as part of your answer, and because it does not satisfy the output format, it will be marked wrong, even if your answer is otherwise correct!



##Solution:


// bits/stdc++.h works in linux. 
// It loads most of the libraries of C++ required.
#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}
