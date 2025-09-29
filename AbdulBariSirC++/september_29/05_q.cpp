// Chef and Chocolates
// Chef wants to gift 
// C
// C chocolates to Botswal on his birthday. However, he has only 
// X
// X chocolates with him.
// The cost of 
// 1
// 1 chocolate is 
// Y
// Y rupees.

// Find the minimum money in rupees Chef needs to spend so that he can gift 
// C
// C chocolates to Botswal.

// Input Format
// First line will contain 
// T
// T, number of test cases. Then the test cases follow.
// Each test case contains of a single line of input, three integers 
// C
// ,
// X
// ,
// C,X, and 
// Y
// Y.
// Output Format
// For each test case, output in a single line answer, the minimum money in rupees Chef needs to spend.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int c,x,y;
	    cin>>c>>x>>y;
	   cout<<(c-x)*y<<endl;
	}
	return 0;

}