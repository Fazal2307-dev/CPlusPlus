// Lunchtime
// Chef has his lunch only between 
// 1
// 1 pm and 
// 4
// 4 pm (both inclusive).

// Given that the current time is 
// X
// X pm, find out whether it is lunchtime for Chef.

// Input Format
// The first line of input will contain a single integer 
// T
// T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, containing one integer 
// X
// X.
// Output Format
// For each test case, print in a single line 
// YES
// YES if it is lunchtime for Chef. Otherwise, print 
// NO
// NO.

// You may print each character of the string in either uppercase or lowercase (for example, the strings 
// YeS
// YeS, 
// yEs
// yEs, 
// yes
// yes and 
// YES
// YES will all be treated as identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>=1 && x<=4)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}
	return 0;

}
