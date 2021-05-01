/*
Platform :- Atcoder
Problem :- D - Message for aliens
Contest :- Zone energy Programming contest
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     string s;
     cin>>s;
     
     string temp="";
     for(int i=0;i<1000000;++i){
         temp+="0";
     }
     
     int f=0;
     int start=500000;
     int d=0;
      for(int i=0;i<s.size();++i){
         if(f){
             if(s[i]=='R'){
                 f=0;
             }
             else{
                 if(temp.size()>0){
                     int len=d;
                     len++;
                    
                     temp[start-len]=s[i];
                     d++;
                 }
                 else{
                     temp[start]=s[i];
                     start++;
                     d++;
                     f=0;
                 }
             }
         }
         else{
             if(s[i]=='R'){
                 f=1;
             }
             else{
                 temp[start]=s[i];
                 start++;
                 d++;
             }
         }
        // cout<<temp<<endl;
     }
     
     string ans="";
     for(auto x:temp){
         if(x!='0')ans+=x;
     }
     
     if(f && ans.size())reverse(ans.begin(),ans.end());
    // cout<<ans<<"& "<<endl;
     
     stack<char>P;
     for(auto x:ans){
         if(!P.empty()){
             if(P.top()==x){
                // cout<<x<<endl;
                 P.pop();
             }
             else P.push(x);
         }
         else{
             P.push(x);
         }
     }
     
     if(P.empty()){cout<<""<<endl;exit(0);}
     
     string fin="";
     while(!P.empty()){
         fin+=P.top();
         P.pop();
     }
     reverse(fin.begin(),fin.end());
     cout<<fin<<endl; 
      
}
