#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int b,a,c;
    cout<<"Enter value of a,b and c:\n ";
    cin>>a>>b>>c;
    int root= (-b+sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"Root of quadratic equation"<<root;
    return 0;
}