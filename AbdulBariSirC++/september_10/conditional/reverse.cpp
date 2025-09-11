#include<iostream>
using namespace std;
int main(){
    int n,remainder,rev=0;
    cout<<"Enter value of n:";
    cin>>n;
    int n1=n;
    while(n!=0){
        remainder= n%10;
        rev = (rev*10)+remainder;
        n=n/10;
    }
    cout<<rev<<endl;
    if(n1 == rev)
    cout<<"Number is palindrom";
    else
    cout<<"Number is not plaindrom";
    return 0;
}
