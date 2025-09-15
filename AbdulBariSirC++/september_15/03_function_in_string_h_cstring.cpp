#include<iostream>
#include<cstring>
using namespace std;
int main(){
//     char s[10];
// cout<<"Enter your string:";
// cin.getline(s,100);
// cout<<"Lenght "<<strlen(s)<<endl;
char s1[20]="Good";
char s2[20]="Morining";
strcat(s1,s2);
cout<<s1<<endl;
cout<<s2<<endl;
char s[10]="Fazal";
char t[10]="Anjum";
strncat(s,t,4);
cout<<s<<endl;


return 0;

}
