// The Two Dishes
// Chef prepared two dishes yesterday. Chef had assigned the 
// tastiness
// tastiness 
// T
// 1
// T 
// 1
// ​
//   and 
// T
// 2
// T 
// 2
// ​
//   to the first and to the second dish respectively. The tastiness of the dishes can be any 
// integer
// integer between 
// 0
// 0 and 
// N
// N (both inclusive).

// Unfortunately, Chef has forgotten the values of 
// T
// 1
// T 
// 1
// ​
//   and 
// T
// 2
// T 
// 2
// ​
//   that he had assigned to the dishes. However, he remembers the sum of the tastiness of both the dishes - denoted by 
// S
// S.

// Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. Can you help the Chef in finding the maximum absolute difference?

// It is guaranteed that at least one pair 
// {
// T
// 1
// ,
// T
// 2
// }
// {T 
// 1
// ​
//  ,T 
// 2
// ​
//  } exist such that 
// T
// 1
// +
// T
// 2
// =
// S
// ,
// 0
// ≤
// T
// 1
// ,
// T
// 2
// ≤
// N
// T 
// 1
// ​
//  +T 
// 2
// ​
//  =S,0≤T 
// 1
// ​
//  ,T 
// 2
// ​
//  ≤N.

// Input Format
// The first line of input contains a single integer 
// T
// T, denoting the number of testcases. The description of the 
// T
// T testcases follows.
// The first and only line of each test case contains two space-separated integers 
// N
// N, 
// S
// S, denoting the maximum tastiness and the sum of tastiness of the two dishes, respectively.
// Output Format
// For each testcase, output a single line containing the maximum absolute difference between the tastiness of the two dishes.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,s,diff=0;
	    cin>>n>>s;
	    if(n>=s)
	    diff=s;
	    else{
	        diff = n-(s-n);
	    }
	    cout<<diff<<endl;
	    
	}
	return 0;

}