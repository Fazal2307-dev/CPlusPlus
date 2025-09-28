// Bob at the Bank
// Bob has an account in the Bobby Bank. His current account balance is 
// W
// W rupees.

// Each month, the office in which Bob works deposits a fixed amount of 
// X
// X rupees to his account.
// Y
// Y rupees is deducted from Bob's account each month as bank charges.

// Find his final account balance after 
// Z
// Z months. Note that the account balance can be negative as well.

// Input Format
// The first line will contain 
// T
// T, the number of test cases. Then the test cases follow.
// Each test case consists of a single line of input, containing four integers 
// W
// ,
// X
// ,
// Y
// ,
// W,X,Y, and 
// Z
// Z — the initial amount, the amount deposited per month, the amount deducted per month, and the number of months.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    int amount= w+(x-y)*z;
	    cout<<amount<<endl;
	    
	}
	return 0;

}
