/*
Platform :- Codeforces
Problem :- A - Two Substring
Contest :- Codeforces Round 306 Div 2
Approach :- We will check if we have ("AB" and "BA") or ("BA" and "AB") as disjoint substring or not. 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
   
   int n=s.size();
   int f=0,g=0;
   // check from left to right for AB BA 
   for(int i=0;i<s.size();++i){
       // if g==1 it means we got AB and we are looking for BA
       if(g){
           
           if(s[i]=='B'){
             if((i+1)<n){
                 if(s[i+1]=='A'){
                     f=1;
                     break;
                 }
             }   
           }
           
       }
       else{
           
           if(s[i]=='A'){
               if((i+1)<n){
                   if(s[i+1]=='B'){
                       g=1;
                       i++;
                   }
               }
           }
       }
   }
   
   if(f)cout<<"YES"<<endl;
   else{
       
       // now we look for BA AB pattern 
       f=0,g=0;
       
       for(int i=0;i<s.size();++i){
       // if g==1 it means we got BA and we are looking for AB
       if(g){
           
           if(s[i]=='A'){
             if((i+1)<n){
                 if(s[i+1]=='B'){
                     f=1;
                     break;
                 }
             }   
           }
           
       }
       else{
           
           if(s[i]=='B'){
               if((i+1)<n){
                   if(s[i+1]=='A'){
                       g=1;
                       i++;
                   }
               }
           }
       }
   }
   
   if(f)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
       
   }
   
}
