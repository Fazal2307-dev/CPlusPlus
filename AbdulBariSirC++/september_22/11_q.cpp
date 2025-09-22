// Good Investment or Not
// Chef has invested his money at an interest rate of 
// X
// X percent per annum while the current inflation rate is 
// Y
// Y percent per annum.

// An investment is called good if and only if the interest rate of the investment is at least twice of the inflation rate.
// Determine whether the investment made by Chef is good or not.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of two integers 
// X
// X and 
// Y
// Y, the interest rate and the current inflation rate respectively.
// Output Format
// For each test case, output YES if the investment is good, NO otherwise.

// You can output any letter in any case. For example YES, yes, yES are all considered same.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x/2)>=y)
        cout<<"yes";
        else
        cout<<"NO";
        cout<<endl;
    }
    return 0;

}
