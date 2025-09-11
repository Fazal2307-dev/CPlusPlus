#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter value of marks:";
cin>>marks;
if(marks>=85){
    cout<<"A Grade";
}
else if(marks>=75 && marks<85){
    cout<<"B Grade";
}else if(marks>=65 && marks<75){
    cout<<"C Grade";
}else
cout<<"Fail";
return 0;

}

