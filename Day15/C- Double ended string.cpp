/*
Platform :- Codeforces
Problem :- C - Double Ended string
Contest :- Coddeforces Round #703 Div 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
          string s1,s2;
          cin>>s1>>s2;
          
          int ans=0;
          int mx=0;
           
          for(int i=0;i<s1.size();++i){
              
              
              for(int j=0;j<s2.size();++j){
                 
                  if(s1[i]==s2[j]){
                       int c=0;
                      for(int k=0;(k+j)<(s2.size()) && (k+i)<s1.size();++k){
                          if(s1[k+i]==s2[k+j]){
                              c++;
                          }
                          else break;
                      }
                      //cout<<c<<" ";
                      if(mx<c){
                      mx=c;
                      ans=(s1.size()-c)+(s2.size()-c);
                      }
                  }
              }
               
              
          }
          
          if(mx==0){
              ans=(s1.size()+s2.size());
              cout<<ans<<endl;
          }
          else{
              cout<<ans<<endl;
          }
    }
}
