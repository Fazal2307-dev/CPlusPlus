// Tyre problem
// There are 
// N
// N bikes and 
// M
// M cars on the road.

// Each bike has 
// 2
// 2 tyres.
// Each car has 
// 4
// 4 tyres.
// Find the total number of tyres on the road.

// Input Format
// The first line will contain 
// T
// T - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two integers 
// N
// ,
// M
// N,M.
// Output Format
// For each test case, output in a single line, the total number of tyres on the road.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    cout<<2*n+4*m<<endl;
	}
	return 0;

}










