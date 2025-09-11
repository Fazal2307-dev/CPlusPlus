#include<iostream>
using namespace std;
int main(){
    int a[10],n=10,l=0,h=n-1,key,mid;
    cout<<"Enter value of sortd array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter key:";
    cin>>key;
    while(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            cout<<"found at:"<<mid;
            return 0;
        }else if(key<a[mid]){
            h=mid-1;
        }else{
            l=mid-1;
        }
    }
    cout<<"Not found in array:"<<endl;
    return 0;

}