// Greater Average
// You are given 
// 3
// 3 numbers 
// A
// ,
// B
// ,
// A,B, and 
// C
// C.

// Determine whether the average of 
// A
// A and 
// B
// B is strictly greater than 
// C
// C or not?

// NOTE: Average of 
// A
// A and 
// B
// B is defined as 
// (
// A
// +
// B
// )
// 2
// 2
// (A+B)
// ​
//  . For example, average of 
// 5
// 5 and 
// 9
// 9 is 
// 7
// 7, average of 
// 5
// 5 and 
// 8
// 8 is 
// 6.5
// 6.5.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of 
// 3
// 3 integers 
// A
// ,
// B
// ,
// A,B, and 
// C
// C.
// Output Format
// For each test case, output YES if average of 
// A
// A and 
// B
// B is strictly greater than 
// C
// C, NO otherwise.

// You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float a,b,c;
	    cin>>a>>b>>c;
	    if((a+b)/2>c)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}
	return 0;

}