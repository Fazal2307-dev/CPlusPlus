// Bidding
// Alice, Bob and Charlie are bidding for an artifact at an auction.
// Alice bids 
// A
// A rupees, Bob bids 
// B
// B rupees, and Charlie bids 
// C
// C rupees (where 
// A
// A, 
// B
// B, and 
// C
// C are distinct).

// According to the rules of the auction, the person who bids the highest amount will win the auction.
// Determine who will win the auction.

// Input Format
// The first line contains a single integer 
// T
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains three integers 
// A
// A, 
// B
// B, and 
// C
// C, — the amount bid by Alice, Bob, and Charlie respectively.
// Output Format
// For each test case, output who (out of Alice, Bob, and Charlie) will win the auction.

// You may print each character of Alice, Bob, and Charlie in uppercase or lowercase (for example,
// ALICE, aliCe, aLIcE will be considered identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"Alice";
    else if(b>a && b>c)
    cout<<"Bob";
    else
    cout<<"Charlie";
    cout<<endl;
}
return 0;

}
