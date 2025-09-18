#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int N;
    cin>>N;
   int D[N];
   for(int i=0;i<N;i++){
       cin>>D[i];
   }
   int count=0;
   for(int i=0;i<N;i++){
       if(D[i]>=1000){
           count++;
       }
   }
    cout<<count<<endl;
}
  
   return 0;
   
}
