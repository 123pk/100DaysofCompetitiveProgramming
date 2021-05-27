/*
Platform :- Codeforces
Contest:- ICM Technex 2017 and Codeforces Round #400 (Div. 1 + Div. 2, combined)
Problem :- A - Serial Killer
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     string s,t;
     cin>>s>>t;
     
     int n;
     cin>>n;
     
     cout<<s<<" "<<t<<endl;
     for(int i=0;i<n;++i){
         string s1,s2;
         cin>>s1>>s2;
         
         if(s==s1){
             cout<<s2<<" "<<t<<endl;
             s=s2;
             
         }
         else{
             cout<<s<<" "<<s2<<endl;
             t=s2;
         }
     }
}
