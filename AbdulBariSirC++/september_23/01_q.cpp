// Reach Home
// Chef is hungry and wants to reach home.

// Chef can travel up to 
// 5
// 5 kilometres on 
// 1
// 1 litre of fuel on his motorcycle.
// Currently, his motorcycle is filled with 
// X
// X litres of fuel and his home is 
// Y
// Y kilometres away.

// Determine whether Chef can reach his home on his motorcycle or not.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// The first and only line of each test case contains two space-separated integers 
// X
// X and 
// Y
// Y — the amount of fuel in Chef’s motorcycle and the distance to Chef’s home in kilometres.
// Output Format
// For each test case, output YES, if Chef can reach home on his motorcycle. Otherwise output NO.

// You can output each character of the answer in uppercase or lowercase. For example, the strings yEs, yes, Yes, and YES are considered the same.
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x*5>=y)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}
	return 0;

}
