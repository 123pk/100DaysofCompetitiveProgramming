  
/*
Platform :- Codeforces 
Contest :- Codeforces Round 479
Problem :- B - Two gram
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     string s;
     cin>>s;
     
     map<string,int>P;
     string temp="";
     for(int i=0;i<2;++i){
         temp+=s[i];
     }
     P[temp]++;
     
     for(int i=2;i<s.size();++i){
         temp.erase(temp.begin());
         temp+=s[i];
         P[temp]++;
     }
     
     string ans="";
     int mx=0;
     for(auto x:P){
         if(mx<x.second){
             mx=x.second;
             ans=x.first;
         }
     }
     cout<<ans<<endl;
}
