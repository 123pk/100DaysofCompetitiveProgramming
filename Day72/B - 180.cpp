/*
Platform :- Atcoder
Problem :- B - 180
Contest :- Atcoder Beginner Contest 202
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
      string s;
      cin>>s;
      
      for(int i=0;i<s.size();++i){
          if(s[i]=='6')s[i]='9';
          else if(s[i]=='9')s[i]='6';
      }
      
      for(int i=s.size()-1;i>=0;--i)cout<<s[i];
      cout<<endl;
}
