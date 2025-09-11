#include<iostream>
using namespace std;
int main(){
    int a[5]={2,8,9,7,6};
    int max;
    max=a[0];
    for(int i=1;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"Maximum value of array:"<<max<<endl;
    return 0;
}