// TV Discount
// Chef is looking to buy a TV and has shortlisted two models. The first one costs 
// A
// A rupees, while the second one costs 
// B
// B rupees.

// Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of 
// C
// C rupees on the first TV, and a flat discount of 
// D
// D rupees on the second one.

// Help Chef determine which of the two TVs would be cheaper to buy during the sale.

// Input Format
// The first line contains a single integer 
// T
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains four space-separated integers 
// A
// A, 
// B
// B, 
// C
// C and 
// D
// D — the marked price (in rupees) of the first TV, the marked price (in rupees) of the second TV, 
//the flat discount (in rupees) of the first TV, and the flat discount (in rupees) of the second TV.
// Output Format
// For each test case, print a single line containing the string First if the first TV is 
//cheaper to buy with discount, or Second if the second TV is cheaper to buy with discount. 
//If both of them cost the same after discount, print Any.

// You may print each character of the string in uppercase or lowercase (for example, 
//the strings first, First, fIRSt, and FIRST will all be treated as identical).
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int first_discount = a-c;
    int second_discount = b-d;
    if(first_discount<second_discount)
    cout<<"First";
    else if(first_discount==second_discount)
    cout<<"Any";
    else
    cout<<"Second";
    cout<<endl;
}
return 0;
}
