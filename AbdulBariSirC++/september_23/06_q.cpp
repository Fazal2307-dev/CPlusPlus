// Discount
// Alice buys a toy with a selling price of 
// 100
// 100 rupees. There is a discount of 
// x
// x percent on the toy. Find the amount Alice needs to pay for it.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// The first and only line of each test case contains a single integer, 
// x
// x — the discount on the toy.
// Output Format
// For each test case, output on a new line the price that Alice needs to pay.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    cout<<100-x<<endl;
	}
	return 0;

}
