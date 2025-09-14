#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter vaalu eof n:";
    cin>>n;
    int  *p;
    p=&n;
    cout<<n<<endl;
    cout<<&n<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    return 0;
}
