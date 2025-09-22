// Fever
// Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be 
// X
// X °F.

// A person is said to have fever if his body temperature is strictly greater than 
// 98
// 98 °F.

// Determine if Chef has fever or not.

// Input Format
// The first line contains a single integer 
// T
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains one integer 
// X
// X - the body temperature of Chef in °F.
// Output Format
// For each test case, output YES if Chef has fever. Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    if(x>98)
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
}
return 0;

}
