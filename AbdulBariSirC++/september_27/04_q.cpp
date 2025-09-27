// Insurance
// Chef bought car insurance. The policy of the insurance is:

// The maximum rebatable amount for any damage is Rs 
// X
// X lakhs.
// If the amount required for repairing the damage is 
// ≤
// X
// ≤X lakhs, that amount is rebated in full.
// Chef's car meets an accident and required Rs 
// Y
// Y lakhs for repairing.

// Determine the amount that will be rebated by the insurance company.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// The first and only line of each test case contains two space-separated integers 
// X
// X and 
// Y
// Y.
// Output Format
// For each test case, output the amount (in lakhs) that will be rebated by the insurance company.
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(y<=x)
    cout<<y;
    else
    cout<<x;
    cout<<endl;
}
return 0;

}
