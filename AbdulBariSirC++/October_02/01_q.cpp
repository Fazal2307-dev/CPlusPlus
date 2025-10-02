// Find the number of digits
// Given an integer N, Calculate and print the number of digits present in N.

// Constraints
// 1
// ≤
// N
// ≤
// 10
// 8
// 1≤N≤10 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<count<<endl;
    return 0;
}