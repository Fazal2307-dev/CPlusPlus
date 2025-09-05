#include<iostream>
using namespace std;
int main(){
int a,b,temp=0;
cout<<"Enter valu eof a and b:\n";
cin>>a>>b;
temp=a;
a=b;
b=temp;
cout<<"After swap of a and b:"<<a<<" "<<b; 
}
