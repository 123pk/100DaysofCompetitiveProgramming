/*
Platform :- Leetcode
Problem :- C - Doubled
Contest :- Bi Weekly Contest 48
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     long long n;
     cin>>n;
     
     long long temp1=0,d=10,c=0;
     while(temp1<=n){
         
         temp1+=(d+1);
         if(temp1<=n)c++;
         else break;
        
         string z=to_string(temp1);
         
         if(count(z.begin(),z.end(),'9')==z.size()){
             string k;
             for(int i=0;i<(z.size()+2)/2;++i){
                 if(i==0){
                     k+='1';
                     
                 }else {
                     k+='0';
                 }
                     
             }
             k+=k;
             temp1=stoll(k);
             if(temp1<=n)c++;
             d*=10;
         }
     }
     cout<<c<<endl;
}
