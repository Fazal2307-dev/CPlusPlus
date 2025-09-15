#include<iostream>
using namespace std;
int main(){
    char s[20];
    cout<<"Enter you s[] value:";
    cin>>s;
    cin.get(s,20);
    cout<<s<<endl;
    char s2[20];
    cout<<"Enter your name again:";
    cin.get(s2,20);
    cout<<s2<<endl;
    // cin.getline(s,20);
    // cout<<s<<endl;

    return 0;
}
//if you taking two input with the help cin.get() you will not get second value 
//if you want 2nd value as input you can do cin.get( first value ) cin.ignore() cin.get(second value )