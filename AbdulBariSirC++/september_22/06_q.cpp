// Sleep deprivation
// A person is said to be sleep deprived if he slept strictly less than 
// 7
// 7 hours in a day.

// Chef was only able to sleep 
// X
// X hours yesterday. Determine if he is sleep deprived or not.

// Input Format
// The first line contains a single integer 
// T
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains one integer 
// X
// X — the number of hours Chef slept.
// Output Format
// For each test case, output YES if Chef is sleep-deprived. Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<7)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}
return 0;
}
