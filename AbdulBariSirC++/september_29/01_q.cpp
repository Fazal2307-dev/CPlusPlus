// Monopoly in Chefland
// Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.

// There are exactly 
// 3
// 3 companies in the market each of whose revenues are denoted by 
// R
// 1
// R 
// 1
// ​
//  , 
// R
// 2
// R 
// 2
// ​
//   and 
// R
// 3
// R 
// 3
// ​
//   respectively. A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors.

// Given the revenue of the 
// 3
// 3 companies, help Chef determine if any of them has a monopolistic advantage.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of a single line of input containing three space separated integers 
// R
// 1
// R 
// 1
// ​
//  , 
// R
// 2
// R 
// 2
// ​
//   and 
// R
// 3
// R 
// 3
// ​
//   denoting the revenue of the three companies respectively.
// Output Format
// For each test case, output 
// YES
// YES if any of the companies has a monopolistic advantage over its competitors, else output 
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
	    int R1,R2,R3;
	    cin>>R1>>R2>>R3;
	    if(R1>R2+R3 or R2>R1+R3 or R3>R1+R2)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}
return 0;
}
