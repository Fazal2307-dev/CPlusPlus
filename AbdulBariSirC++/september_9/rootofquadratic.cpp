#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter value of a,b and c:\n";
    cin>>a>>b>>c;
    float D=(b*b-4*a*c);
    if(D>0){
        float root1=(-b+sqrt(D))/(2*a);
        float root2=(-b+sqrt(D))/(2*a);
        cout<<"Two real and distinct value:"<< root1 <<"and"<<root2<<endl;
    }
    else if(D==0){
        float root3 = -b/(2+a);
        cout<<"One real value:"<<root3<<endl;
    }
    else{
        cout<<"No is imaginary"<<endl;
    }
    return 0;
}