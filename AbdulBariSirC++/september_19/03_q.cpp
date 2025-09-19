// Clear Day
// Chef classifies a day to be either rainy, cloudy, or clear.

// In a particular week, Chef finds 
// X
// X days to be rainy and 
// Y
// Y days to be cloudy.
// Find the number of clear days in the week.

// Input Format
// The first and only line of input will contain two space-separated integers 
// X
// X and 
// Y
// // Y, denoting the number of rainy and cloudy days in the week.
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int x,y;
cin>>x>>y;
cout<<7-y-x<<endl;
return 0;
}