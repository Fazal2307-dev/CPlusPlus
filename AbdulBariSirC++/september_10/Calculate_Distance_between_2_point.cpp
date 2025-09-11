#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1;
    cout<<"Enter value of X1:";
    cin>>x1;
    int x2;
    cout<<"Enter value of x2:";
    cin>>x2;
    int y1;
    cout<<"Enter value of y1:";
    cin>>y1;
    int y2;
    cout<<"Enter vaalue of y2:";
    cin>>y2;
    int distance = sqrt((x2*x2-x1*x1)+(y2*y2-y1*y1));
    cout<<"Distnace between two point:"<<distance<<endl;
    return 0;
}