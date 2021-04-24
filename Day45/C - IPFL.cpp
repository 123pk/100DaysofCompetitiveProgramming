/*
Platform :- Atcoder
Contest :- Atcoder Beginner contest 199
Problem :- C - IPFL
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      
      string s;
      cin>>s;
      
      int q;
      cin>>q;
      int f=0;
      for(int i=0;i<q;++i){
          int t,x,y;
          cin>>t>>x>>y;
          
          if(t==2){
              if(f)f=0;
              else f=1;
          }
          else{
              x--;
              y--;
              //cout<<s<<" "<<f<<" ";
              if(f){
                 // cout<< " * "<<x<<" "<<y<<" ";
                 if(x>=n){
                     x-=n;
                 }
                 else  x+=(n);
                 
                  if(y>=n)y-=(n);
                  else y+=n;
             
                  swap(s[x],s[y]);
              }
              else{
                  swap(s[x],s[y]);
              }
              //cout<<s<<endl;
          }
      }
    
      if(f){
        
          for(int i=n;i<2*n;++i)cout<<s[i];
          for(int i=0;i<n;++i)cout<<s[i];
          cout<<endl;
      }
      else{
          
          cout<<s<<endl;
      }
}
