#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter value of amount:";
    cin>>amount;
    float discount = amount-amount*20/100;
    cout<<discount<<endl;
    return 0;
}
