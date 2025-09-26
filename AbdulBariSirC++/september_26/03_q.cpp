// Monthly Budget
// Akshat has 
// X
// X rupees to spend in the current month. His daily expenditure is 
// Y
// Y rupees, i.e., he spends 
// Y
// Y rupees each day.

// Given that the current month has 
// 30
// 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.

// Input Format
// The first line will contain 
// T
// T - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two integers 
// X
// X, 
// Y
// Y - the amount of money Akshat has for the current month and his daily expenditure respectively.
// Output Format
// For each test case, output YES if Akshat has enough money to meet his daily expenditure for 
// 30
// 30 days of the month, otherwise output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(x >= (y*30))
    cout<<"YEs";
    else
    cout<<"NO";
    cout<<endl;
    
}
return 0;
}
