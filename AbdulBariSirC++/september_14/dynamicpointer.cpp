#include<iostream>
using namespace std;
int main(){
    int a[5]={2,45,6,8,14};
    int *p=a;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p=p+3;
    cout<<*p<<endl;
    return 0;
}