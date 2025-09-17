#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="john123@gmail.com";
    int i=(int)str.find('@');
    string uname = str.substr(0,i);
    cout<<"Username is: "<<uname<<endl;
    return 0;

}