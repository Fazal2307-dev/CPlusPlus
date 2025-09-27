// Chef and Stock Prices
// Chef wants to buy a stock whose price was 
// S
// S rupees when the market opened. He will buy the stock if and only if its price is in the range 
// [
// A
// ,
// B
// ]
// [A,B]. The price of the stock has changed by 
// C
// %
// C% by the time he was trying to buy the stock. Will he be able to buy the stock?

// Input Format
// First line of the input contains 
// T
// T, the number of testcases. Then the test cases follow.
// Each test case contains 
// 4
// 4 space-separated integers 
// S
// ,
// A
// ,
// B
// ,
// C
// S,A,B,C in a single line.
// Output Format
// For each test case, if Chef buys the stock print YES, otherwise print NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int s,a,b,c;
	    cin>>s>>a>>b>>c;
	    if(c>0){
	        int gain = s+s*(c/100);
	        if(gain>=a && gain<b)
	        cout<<"YES";
	        else 
	        cout<<"NO";
	    }
	    else if(c<0){
	    int loss = s-s*(c/100);
	    if(loss>a && loss<b)
	    cout<<"YES";
	    else
	    cout<<"NO";
	} 
	   	cout<<endl; 
	}

	return 0;
	

}
