// Practice makes us perfect
// Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.

// Our Chef took the above advice very seriously and decided to set a target for himself.

// Chef decides to solve at least 
// 10
// 10 problems every week for 
// 4
// 4 weeks.
// Given the number of problems he actually solved in each week over 
// 4
// 4 weeks as 
// P
// 1
// ,
// P
// 2
// ,
// P
// 3
// ,
// P 
// 1
// ​
//  ,P 
// 2
// ​
//  ,P 
// 3
// ​
//  , and 
// P
// 4
// P 
// 4
// ​
//  , output the number of weeks in which Chef met his target.

// Input Format
// There is a single line of input, with 
// 4
// 4 integers 
// P
// 1
// ,
// P
// 2
// ,
// P
// 3
// ,
// P 
// 1
// ​
//  ,P 
// 2
// ​
//  ,P 
// 3
// ​
//  , and 
// P
// 4
// P 
// 4
// ​
//  . These are the number of problems solved by Chef in each of the 
// 4
// 4 weeks.

// Output Format
// Output a single integer in a single line - the number of weeks in which Chef solved at least 
// 10
// 10 problems.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int count=0;
	int a[4];
	for(int i=0;i<4;i++){
	    cin>>a[i];
	}
	for(int i=0;i<4;i++){
	    if(a[i]>=10)
	    count++;
	   }
	   cout<<count<<endl;
	   return 0;
    

}
