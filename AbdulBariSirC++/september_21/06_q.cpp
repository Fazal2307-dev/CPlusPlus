// Mana Points
// Chef is playing a mobile game. In the game, Chef's character Chefario can perform special attacks. However, one special attack costs 
// X
// X mana points to Chefario.

// If Chefario currently has 
// Y
// Y mana points, determine the maximum number of special attacks he can perform.

// Input Format
// The first line contains a single integer 
// T
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two space-separated integers 
// X
// X and 
// Y
// Y — the cost of one special attack and the number of mana points Chefario has initially.
// Output Format
// For each test case, output the maximum number of special attacks Chefario can perform.
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    cout<<y/x;
    cout<<endl;
}
return 0;
}