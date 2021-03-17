/*
Platform :- Codeforces
Problem :- C2 K LCM Hard Version
Contest :- Codeforces Round 708 Div 2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
          long long n;
          int k;
          cin>>n>>k;
          
          int c=k;
          vector<int>ans;
          while(c>3){
              ans.push_back(1);
              n--;
              c--;
          }
          
          for(auto x:ans)cout<<x<<" ";
          if(n==k){
              cout<<1<<" "<<1<<" "<<1<<endl;
          }
          else{
              if(n%2){
                  long long z=n/2;
                  cout<<1<<" "<<z<<" "<<z<<endl;
              }
              else{
                  long long z=(n)/2;
                  
                  
                  if(z%2){
                      cout<<2<<" "<<((n-1)/2)<<" "<<((n-1)/2)<<endl;
                  }
                  else{
                   
                      cout<<(z/2)<<" "<<(z/2)<<" "<<z<<endl;
                  
                  }
                   
              }
          }
    }
}
