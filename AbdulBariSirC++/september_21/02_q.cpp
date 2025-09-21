// Messi vs Ronaldo
// In Chefland, a football player gets 
// 2
// 2 points for each goal and 
// 1
// 1 point for each assist.

// Messi has 
// A
// A goals and 
// B
// B assists this season, whereas Ronaldo has 
// X
// X goals and 
// Y
// Y assists.
// Find out the player with more points this season.

// Input Format
// The first and only line of input will contains four space-separated integers 
// A
// A, 
// B
// B, 
// X
// X and 
// Y
// Y, the number of goals and assists that Messi has and the number of goals and assists 
//that Ronaldo has, respectively.
// Output Format
// Print a single line containing:

// Messi, if Messi has more points than Ronaldo.
// Ronaldo, if Ronaldo has more points than Messi.
// Equal, if both have equal points.
// You can print each character in uppercase or lowercase. For example, the strings Messi,
// MESSI, messi, and MeSSi are considered identical.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int messi = a*2+b;
	int ronaldo = x*2 + y;
	if(messi > ronaldo)
	cout<<"Messi";
	else if(messi == ronaldo )
	cout<<"Equal";
	else
	cout<<"Ronaldo";
	cout<<endl;
	return 0;

}
