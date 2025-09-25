// Parliament
// An important resolution is being discussed in the Parliament of Chefland. There are 
// N
// N members present in the Parliament out of which 
// X
// X members voted in favour of the resolution and the remaining voted against it.

// According to the constitution of Chefland, a resolution is passed if and only if half or more than half the members present in the Parliament vote in favour of the resolution.

// Determine if the resolution is passed or not.

// Input Format
// The first line contains a single integer 
// T
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two space-separated integers 
// N
// N and 
// X
// X — the total number of members present in the Parliament and the number of members who voted in favour of the resolution.
// Output Format
// For each test case, output YES if the resolution is passed. Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs and Yes will be considered identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n-x <=x)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}
	return 0;

}
