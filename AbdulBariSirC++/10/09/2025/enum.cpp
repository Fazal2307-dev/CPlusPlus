#include<iostream>
using namespace std;
enum day{mon,tue,wed=5,thr,fri,sat,sun};
int main(){

    day d;
    d = sat;
    cout<<d<<endl;
    return 0;
}