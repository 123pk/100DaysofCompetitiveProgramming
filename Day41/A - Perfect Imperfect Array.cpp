/*
Platform :- Codeforces 
Contest :- Codeforces Round #716 Div 2
Problem :- A - Perfect Imperfect Array
*/
#include<bits/stdc++.h>
using namespace std;

 

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      long long A[n];
      int f=0;
      for(int i=0;i<n;++i){
          cin>>A[i];
          
          long long temp=sqrt(A[i]);
          temp*=temp;
          if(temp!=A[i])f=1;
      }
      
      if(f)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
