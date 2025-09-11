#include<iostream>
using namespace std;
int main(){
    int a[4]={4,8,9,7};
    for(int x:a)
    cout<<x<<++x<<endl;
    for(int x:a)
    cout<<x<<endl;
    return 0;

}