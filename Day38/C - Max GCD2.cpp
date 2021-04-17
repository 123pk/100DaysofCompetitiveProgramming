/*
Platform :- Atcoder
Contest :- Japanese Student Championship
Problem :- C - Max GCD2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
      int n,m;
      cin>>n>>m;
      
      int ans=__gcd(n,m);
      
      map<int,int>P;
      P[n]++;
      P[m]++;
      for(int i=n;i<=m;++i){
          for(int j=2;j*j<=i;++j){
              if(i%j==0){
                  
                  if((j==(i/j))){
                      if(P[j])ans=max(ans,j);
                      else P[j]++;
                      continue;
                  }
                  if(P[j])ans=max(ans,j);
                  else P[j]++;
                  
                  if(P[(i/j)])ans=max(ans,(i/j));
                  else P[(i/j)]++;
              }
          }
          P[i]++;
          //cout<<i<<" "<<P[i]<<endl;
      }
      
      cout<<ans<<endl;
}
