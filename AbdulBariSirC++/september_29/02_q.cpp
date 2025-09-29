// Bucket and Water Flow
// Alice has a bucket of water initially having 
// W
// W litres of water in it. The maximum capacity of the bucket is 
// X
// X liters.

// Alice turned on the tap and the water starts flowing into the bucket at a rate of 
// Y
// Y litres/hour. She left the tap running for exactly 
// Z
// Z hours. Determine whether the bucket has been overflown, filled exactly, or is still left unfilled.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases. The description of the test cases follows.
// Each test case consists of a single line of input containing four space-separated integers 
// W,
// X,
// Y ,
// Z
// W, X, Y, Z.
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    if(w+(y*z)>x)
    cout<<"OVERFLOW";
    else if(w+(y*z)<x)
    cout<<"UNFILLED";
    else
    cout<<"FILLED";
    cout<<endl;
}
return 0;

}
