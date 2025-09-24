// Profit Increment
// Chef recently started selling a special fruit.
// He has been selling the fruit for 
// X
// X rupees (
// X
// X is a multiple of 
// 100
// 100). He earns a profit of 
// Y
// Y rupees on selling the fruit currently.

// Chef decided to increase the selling price by 
// 10
// %
// 10%. Please help him calculate his new profit after the increase in selling price.

// Note that only the selling price has been increased and the buying price is same.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of a single line of input containing two space-separated integers 
// X
// X and 
// Y
// Y denoting the initial selling price and the profit respectively.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int new_profit =  (x+x*0.1)-(x-y);
        cout<<new_profit<<endl;
    }
    return 0;

}
