#include<iostream>
using namespace std;
int main(){
    int a[10]={12,56,78,94,66,23,47,58,91,23};
    int max;
    max=a[0];
    for(int i=0;i<10;i++){
        if(max<a[i]){
            max=a[i];
         
        }
    }
    cout<<max<<" ";
    return 0;
}