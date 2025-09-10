#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter value of length and breadth:\n";
    cin>>length>>breadth;
    cout<<"Area of Rectangle:"<<length*breadth<<endl;
    cout<<"Perimeter of rectangle:"<<2*(length+breadth);
    return 0;
}