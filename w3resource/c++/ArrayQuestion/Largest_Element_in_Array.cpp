#include<iostream>
using namespace std;
int main(){
    int a[10]={12,45,78,98,23,46,21,26,28,29,};
    int max;
    max=a[0];
    for(int i=1;i<10;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
       cout<<max<<endl;
    return 0;
}