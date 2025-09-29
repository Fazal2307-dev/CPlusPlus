// Netflix
// Alice, Bob, and Charlie are contributing to buy a Netflix subscription. However, Netfix allows only two users to share a subscription.

// Given that Alice, Bob, and Charlie have 
// A
// ,
// B
// ,
// A,B, and 
// C
// C rupees respectively and a Netflix subscription costs 
// X
// X rupees, find whether any two of them can contribute to buy a subscription.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case contains four space-separated integers 
// A
// ,
// B
// ,
// C
// ,
// A,B,C, and 
// X
// X — the amount that Alice, Bob, and Charlie have, and the cost of a Netflix subscription respectively.
// Output Format
// For each test case, output YES, if any two of Alice, Bob, and Charlie can contribute to buy a Netflix subscription or NO otherwise.

// You may print each character in uppercase or lowercase. For example, NO, no, No, and nO are all considered identical.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,x;
	    cin>>a>>b>>c>>x;
	    if(a+b>=x || b+c>=x || c+a>=x)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}

return 0;
}
