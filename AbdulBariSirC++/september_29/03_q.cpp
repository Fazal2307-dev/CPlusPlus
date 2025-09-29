// Miami GP
// Chef has finally got the chance of his lifetime to drive in the 
// F
// 1
// F1 tournament. But, there is one problem. Chef did not know about the 107% rule and now he is worried whether he will be allowed to race in the main event or not.

// Given the fastest finish time as 
// X
// X seconds and Chef's finish time as 
// Y
// Y seconds, determine whether Chef will be allowed to race in the main event or not.

// Note that, Chef will only be allowed to race if his finish time is within 107% of the fastest finish time.

// Input Format
// First line will contain 
// T
// T, number of testcases. Then the testcases follow.
// Each testcase contains of a single line of input, two space separated integers 
// X
// X and 
// Y
// Y denoting the fastest finish time and Chef's finish time respectively.
// Output Format
// For each test case, output 
// YES
// YES if Chef will be allowed to race in the main event, else output 
// NO
// NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings 
// YeS
// YeS, 
// yEs
// yEs, 
// yes
// yes and 
// YES
// YES will all be treated as identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    int a=x*1.07;
	    if(a>=y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
}
return 0;
}
