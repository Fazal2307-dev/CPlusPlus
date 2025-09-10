#include<iostream>
using namespace std;
int main(){
    int hour;
    cout<<"Enter value of hour:";
    cin>>hour;
    if(hour>=9 && hour<=18)
    cout<<"isWorking"<<endl;
    else
    cout<<"Not working hour"<<endl;
    return 0;
}