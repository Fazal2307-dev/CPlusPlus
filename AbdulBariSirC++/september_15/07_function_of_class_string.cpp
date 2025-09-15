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
    // cout << str.clear()<<endl;
    if(str.empty())
    cout<<"String is empty"<<endl;
    else 
    cout<<"String is not empty"<<endl;
    return 0;
}