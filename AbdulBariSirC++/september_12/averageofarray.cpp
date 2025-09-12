#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    int sum=0;
    float count=0;
    cout<<"enter value of a[10]:";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        sum =sum+a[i];
        count++;
    }
    cout<<sum<<endl;
    float average = sum/count;
    cout<<average<<endl;
    return 0;
}