#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter value of string:";
    getline(cin,str);
    int vowels=0,consonents=0,spaces=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='A' || str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||
           str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
           vowels++;
           else if(str[i]== ' ')
           spaces++;
           else
           consonents++;
    }
    cout<<"Vowels "<<vowels<<endl;
    cout<<"Consonents"<<consonents<<endl;
    cout<<"Spaces"<<spaces+1<<endl;
    return 0;
}