// Passes for Fair
// There is a fair going on in Chefland. Chef wants to visit the fair along with his 
// N
// N friends. Chef manages to collect 
// K
// K passes for the fair. Will Chef be able to enter the fair with all his 
// N
// N friends?

// A person can enter the fair using one pass, and each pass can be used by only one person.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of a single line containing two space-separated integers 
// N
// ,
// K
// N,K.
// Output Format
// For each test case, print on a new line YES if Chef will be able to enter the fair with all his 
// N
// N friends and NO otherwise.

// You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    if(k>n)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	    
	}
return 0;
}
