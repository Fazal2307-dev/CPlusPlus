// Total and Average of Four Numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter value of a,b,c and d:\n";
    cin>>a>>b>>c>>d;
    int sum= a+b+c+d;
    cout<<"Sum of a,b,c and d are:"<<sum<<endl;
    float average = (a+b+c+d)/4;
    cout<<"average of a,b,c and d are:"<<average<<endl;
    return 0;
}