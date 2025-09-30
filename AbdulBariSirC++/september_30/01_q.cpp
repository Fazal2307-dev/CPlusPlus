// Vaccine Dates
// Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
// Chef has taken his first dose of vaccine 
// D
// D days ago. He may take the second dose no less than 
// L
// L days and no more than 
// R
// R days since his first dose.

// Determine if Chef is too early, too late, or in the correct range for taking his second dose.

// Input Format
// First line will contain 
// T
// T, number of testcases. Then the testcases follow.
// Each testcase contains of a single line of input, three integers 
// D
// ,
// L
// ,
// R
// D,L,R.
// Output Format
// For each test case, print a single line containing one string - "Too Early" (without quotes) if it's too early to take the vaccine, "Too Late" (without quotes) if it's too late to take the vaccine, "Take second dose now" (without quotes) if it's the correct time to take the vaccine.
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
 int D,L,R;
 cin>>D>>L>>R;
 if(D>=L &&D<=R)
 cout<<"Take second dose now";
 else if(D>L &&D>R)
 cout<<"Too Late";
 else
 cout<<"Too Early";
 cout<<endl;
}
return 0;
}
