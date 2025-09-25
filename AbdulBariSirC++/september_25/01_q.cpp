// Fill the Bucket
// Chef has a bucket having a capacity of 
// K
// K liters. It is already filled with 
// X
// X liters of water.

// Find the maximum amount of extra water in liters that Chef can fill in the bucket without overflowing.

// Input Format
// The first line will contain 
// T
// T - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two space separated integers 
// K
// K and 
// X
// X - as mentioned in the problem.
// Output Format
// For each test case, output in a single line, the amount of extra water in liters that Chef can fill in the bucket without overflowing.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int k,x;
	cin>>k>>x;
	cout<<k-x<<endl;

	}
return 0;
}
