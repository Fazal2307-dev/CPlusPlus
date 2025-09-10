#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter value of n:\n";
cin>>n;
if(n>0){
    cout<<"N is positive:";
}
else if(n<0){
    cout<<"N is negaative:";
}
else{
    cout<<"N is zero:";
}
return 0;
}