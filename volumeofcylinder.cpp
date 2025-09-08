#include<iostream>
using namespace std;
int main(){
    int n;
    int height;
    cout<<"Enter value of n,and height:\n";
    cin>>n>>height;
    float cylinder = (3.14*n*n*height);
    cout<<cylinder;
    return 0;
}