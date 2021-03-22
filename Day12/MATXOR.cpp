/*
Platform :- Codechef
Problem :- MATXOR
Contest :- Codechef March Cook off 2021
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n,m;
         long long k;
         cin>>n>>m>>k;
         
         long long check;
         if(n!=m){
             long long ans=0;
               for(int i=2;i<=(m+n);++i){
                   if(i<=(min(n,m)+1)){
                       int temp=i-1;
                        
                       if(temp%2){
                           ans=ans xor (k+i);
                       }
                   }
                   else{
                       if(i<=(max(n,m)+1)){
                           int temp=min(n,m);
                           if(temp%2){
                               ans= ans xor (k+i);
                           }
                       }
                       else{
                           int temp=i-min(n,m);
                           int temp2=max(n,m)-temp;
                           temp2++;
                           if(temp2%2){
                               ans= ans xor (k+i);
                           }
                       }
                   }
               }
               cout<<ans<<endl;
               
         }
         else{
             long long ans=0;
             for(int i=1;i<=n;++i){
                 if(i==1){
                     ans=(k+(2*i));
                 }
                 else{
                     ans=ans xor (k+(2*i));
                 }
             }
             cout<<ans<<endl;
               
         }
  
    }
}
