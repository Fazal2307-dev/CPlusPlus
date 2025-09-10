#include<iostream>
using namespace std;
int main(){
    int amount;
    float discount;
    cout<<"Enter valuye of amount:";
    cin>>amount;
    if(amount>=5000){
        
        cout<<"Your net amount before discount:"<<amount;
        discount= amount-((amount)*(0.2));
        cout<<"\nYour net amount after 20percent discount:"<<discount;
    }else if(amount>=2000 && amount<5000){
        cout<<"your net amount before discount:"<<amount;
        discount= amount-(amount*(0.1));
        cout<<"\nyour net amount after 10percent  discount:"<<discount;
    }else{
        cout<<"you get zero discount:"<<endl;
        cout<<"amount is"<<amount;
    }
    return 0;

}