/*
Platform :- Codechef
Problem :- Dinner by Candlelight (DATE1)
Contest :- Codechef March Lunch Time
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
      int t;
      cin>>t;
      while(t--){
          long long a,y,x;
          cin>>a>>y>>x;
          
          if(a<=y)
          {
              long long ans=(a*x);
              if(a==y)cout<<ans<<endl;
              else{
                  ans++;
                  cout<<ans<<endl;
              }
          }
          else{
              long long ans=(a-(a-y))*x;
              cout<<ans<<endl;
          }
      }
}
