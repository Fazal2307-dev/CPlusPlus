// Chef and Donation
// In a certain month, Chef earned 
// X
// X rupees while Chefina earned 
// Y
// Y rupees such that 
// Y
// >
// X
// Y>X.
// Since they want to end up with exactly the same amount, they decide to donate the difference between their income to a charity.

// Find the amount they donate in the month.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of two space-separated integers 
// X
// X and 
// Y
// Y — the income of Chef and Chefina in a month, respectively.
// Output Format
// For each test case, output on a new line, the amount they donate in the month.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y>x)
	    cout<<y-x<<endl;
	}
	return 0;

}
