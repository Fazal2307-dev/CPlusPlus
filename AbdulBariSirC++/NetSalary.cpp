#include<iostream>
using namespace std;
int main(){
    float basic_salary ;
    cout<<"Enter value of Basic salary:";
    cin>>basic_salary;
    float percentage_Of_Allowence;
    cout<<"Enter value of percentage of allwoence:";
     cin>>percentage_Of_Allowence;
    float percentage_Of_deduction;
    cout<<"nEnter value of percentage of deduction:";
    cin>>percentage_Of_deduction;
    float netSalary = basic_salary+basic_salary*percentage_Of_Allowence/100-basic_salary*percentage_Of_deduction/100;
    cout<<"Total Net salary:"<< netSalary<<endl;
    return 0;
}