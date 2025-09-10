#include<iostream>
using namespace std;
int main(){
    string name1;
    cout<<"Enter first name:";
    getline(cin,name1);
    string name2;
    cout<<"Enter second name:";
    getline(cin,name2);
    cout<<name2<<" "<<name1<<endl;
    return 0;
}