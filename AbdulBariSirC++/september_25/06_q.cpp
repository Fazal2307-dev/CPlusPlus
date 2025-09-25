// Speciality
// On every CodeChef user's profile page, the list of problems that they have set, tested, and written editorials for, is listed at the bottom.

// Given the number of problems in each of these 
// 3
// 3 categories as 
// X
// ,
// Y
// ,
// X,Y, and 
// Z
// Z respectively (where all three integers are distinct), find if the user has been most active as a Setter, Tester, or Editorialist.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of three space-separated integers 
// X
// ,
// Y
// ,
// X,Y, and 
// Z
// Z - the number of problems they have set, tested, and written editorials for.
// Output Format
// For each test case, output in a new line:

// Setter, if the user has been most active as a setter.
// Tester, if the user has been most active as a tester.
// Editorialist, if the user has been most active as an editorialist.
// Note that the output is case-insensitive. Thus, the strings SETTER, setter, seTTer, and Setter are all considered the same.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>y && x>z)
	    cout<<"Setter";
	    else if(y>x && y>z)
	    cout<<"Tester";
	    else
	    cout<<"Editorialist";
	    cout<<endl;
	}
	return 0;

}
