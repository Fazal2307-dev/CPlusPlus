// Chef and Wire Frames
// Chef has a rectangular plate of length 
// N
// c
// m
// Ncm and width 
// M
// c
// m
// Mcm. He wants to make a wireframe around the plate. The wireframe costs 
// X
// X rupees per cm.

// Determine the cost Chef needs to incur to buy the wireframe.

// Input Format
// First line will contain 
// T
// T, the number of test cases. Then the test cases follow.
// Each test case consists of a single line of input, containing three space-separated integers 
// N
// ,
// M
// ,
// N,M, and 
// X
// X — the length of the plate, width of the plate, and the cost of frame per cm.
// Output Format
// For each test case, output in a single line, the price Chef needs to pay for the wireframe.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int  t;
	cin>>t;
	while(t--){
	    int n,m,x;
	    cin>>n>>m>>x;
	    int total_length=(2*n+2*m)*x;
	    cout<<total_length<<endl;
	}
	return 0;

}
