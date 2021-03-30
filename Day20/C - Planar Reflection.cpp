/*
Platform :- Codeforces
Contest :-  Codeforces Round 711 Div 2
Problem :- C - Planar Reflection
*/

#include<bits/stdc++.h>
using namespace std;
 

long long mod = 1e9+7;

long long dp[1005][1005];

long long find(int n, int m, int temp){
  if(n<0 or m<0){
      return 0;
  }
  else if(m == 0){
      return 0;
  }
  else if(n == 0){
    return 1;
  }
  else{

  if(dp[n][m] != -1){
    return dp[n][m];
  }
  
  }
  long long ans = (find(n-1, m,temp) 
                         + find(temp-n, m-1, temp))%mod + 0;
  dp[n][m]=ans;
  
  return ans;
}



int main(){
  
 int t;
 cin>>t;
 while(t--){
    int n, m;
    cin>>n>>m;
    
     for(int i=0; i<=n; i++)
      for(int j=0; j<=m; j++)
        dp[i][j] = -1;

     long long tot =find(n,m, n);
      cout<<tot<<endl;
 }

return 0;
}
