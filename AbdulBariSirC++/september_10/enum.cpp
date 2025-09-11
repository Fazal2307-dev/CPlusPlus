#include<iostream>
using namespace std;
enum day{mon,tue,wed=5,thr,fri,sat,sun};
int main(){

    day d;
    d = sat;
    day t;
    t=tue;
    cout<<d<<endl;
    cout<<t<<endl;
    return 0;
}