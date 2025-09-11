#include<iostream>
using namespace std;
int main(){
    int a[10],n=10 ,key;
    cout<<"Enter value of array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter value of key:";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==a[i]){
            cout<<"Key found at:"<<i;
            return 0;
        }
    }
    cout<<"Key not found in an array:";
    return 0;
}