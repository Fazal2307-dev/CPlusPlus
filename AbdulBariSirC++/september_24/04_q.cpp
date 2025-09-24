// Is it hot or cold
// Chef considers the climate HOT if the temperature is above 
// 20
// 20, otherwise he considers it COLD. You are given the temperature 
// C
// C, find whether the climate is HOT or COLD.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// The first and only line of each test case contains a single integer, the temperature 
// C
// C.
// Output Format
// For each test case, print on a new line whether the climate is HOT or COLD.

// You may print each character of the string in either uppercase or lowercase (for example, the strings hOt, hot, Hot, and HOT will all be treated as identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        if(c>20)
        cout<<"HOT";
        else
        cout<<"cold";
        cout<<endl;
    }
    return 0;

}
