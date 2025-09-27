// Codechef Airlines
// Chef has opened a new airline. Chef has 
// 10
// 10 airplanes where each airplane has a capacity of 
// X
// X passengers.
// On the first day itself, 
// Y
// Y people are willing to book a seat in any one of Chef's airplanes.

// Given that Chef charges 
// Z
// Z rupees for each ticket, find the maximum amount he can earn on the first day.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of three space-separated integers 
// X
// ,
// Y
// ,
// X,Y, and 
// Z
// Z — the capacity of each airplane, the number of people willing to book a seat in any one of Chef's airplanes on the first day, and the cost of each seat respectively.
// Output Format
// For each test case, output on a new line, the maximum amount Chef can earn on the first day.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x*10>=y)
	    cout<<y*z;
	    else
	    cout<<x*10*z;
	    cout<<endl;
	}
	return 0;

}