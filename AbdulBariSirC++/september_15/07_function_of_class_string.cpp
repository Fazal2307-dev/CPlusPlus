#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter value of str:";
    getline(cin,str);
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
    // cout<<str.resize()<<endl;
    cout<<str.max_size()<<endl;
    return 0;
}