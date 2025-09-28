// The Mango Truck
// You are given that a mango weighs 
// X
// X kilograms and a truck weighs 
// Y
// Y kilograms. You want to cross a bridge that can withstand a weight of 
// Z
// Z kilograms.

// Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.

// Input Format
// First line will contain 
// T
// T, the number of test cases. Then the test cases follow.
// Each test case consists of a single line of input, three integers 
// X
// ,
// Y
// ,
// Z
// X,Y,Z - the weight of mango, the weight of truck and the weight the bridge can withstand respectively.
// Output Format
// For each test case, output in a single line the maximum number of mangoes that you can load in the truck.
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<((z-y)/x)<<endl;
}
return 0;
}