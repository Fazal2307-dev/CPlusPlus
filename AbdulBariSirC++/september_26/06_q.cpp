// Enormous Input Test
// You are given 
// N
// N integers. Find the count of numbers divisible by 
// K
// K.

// Input Format
// The input begins with two positive integers 
// N
// N, 
// K
// K. The next 
// N
// N lines contains one positive integer each denoted by 
// A
// i
// A 
// i
// ​
//  .

// Output Format
// Output a single number denoting how many integers are divisible by 
// K
// K.
// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,k;
    cin >> n >> k;

    int count=0;
    for (int i=0;i<=n-1;i++)
    {
        int a;
        cin >> a;
        if (a%k==0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
