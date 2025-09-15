#include<iostream>
using namespace std;
int main(){
    char s[20];
    cout<<"Enter you s[] value:";
    // cin>>s
    // cin.get(s,20);
    cin.getline(s,20);
    cout<<s<<endl;
    return 0;
}