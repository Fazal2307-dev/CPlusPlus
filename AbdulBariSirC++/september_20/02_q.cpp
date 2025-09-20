// Four Tickets
// Four friends want to attend a concert. Each ticket costs 
// X
// X rupees.
// They have decided to go to the concert if and only if the total 
//cost of the tickets does not exceed 
// 1000
// 1000 rupees.

// Determine whether they will be going to the concert or not.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of a single integer 
// X
// X, the cost of each ticket.
// Output Format
// For each test case, output YES if they will be going to the concert, NO otherwise.

// You can print each character in uppercase or lowercase. For example,
// the strings YES, yes, Yes, and yES, are all considered identica.
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    if(4*x<=1000)
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
}
return 0;
}
