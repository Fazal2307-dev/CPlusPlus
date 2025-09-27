//finding maximum number in function()
#include<iostream>
using namespace std;

int maximum(int x,int y,int z){
    if(x>y && x>z)
     return x;
    else if(y>z)
    return y;
    else return z;
}
int main(){
    int a=12,b=13,c=76,d;
    d = maximum(a,b,c);
    cout<<d<<endl;
    return 0;
}
