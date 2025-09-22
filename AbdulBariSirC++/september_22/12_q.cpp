// Multivitamin Tablets
// The doctor prescribed Chef to take a multivitamin tablet 
// 3
// 3 times a day for the next 
// X
// X days.

// Chef already has 
// Y
// Y multivitamin tablets.

// Determine if Chef has enough tablets for these 
// X
// X days or not.

// Input Format
// The first line contains a single integer 
// T
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two space-separated integers 
// X
// X and 
// Y
// Y — the number of days Chef needs to take tablets and the number of tablets Chef already has.
// Output Format
// For each test case, output YES if Chef has enough tablets for these 
// X
// X days. Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(3*x<=y)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}
	return 0;

}








