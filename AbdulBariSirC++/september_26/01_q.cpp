// Best Coupon
// Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. 
// X
// X. Chef can use one of the following two coupons to avail a discount.

// Get 
// 10
// 10 percent off on the bill amount
// Get a flat discount of Rs. 
// 100
// 100 on the bill amount
// What is the maximum discount Chef can avail?

// Input Format
// The first line contains a single integer 
// T
// T - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains a single integer 
// X
// X - the bill amount before discount.
// Output Format
// For each testcase, output the maximum discount Chef can avail.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int discount_10 = x - (x*0.1);
	    int discount_100 = x-100;
	    if(discount_10>discount_100)
	    cout<<100;
	    else
	    cout<<x*0.1;
	    cout<<endl;
	}
	return 0;

}