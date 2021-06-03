/*
Platform :- Codeforces
Contest :- Codeoforces Round 260 #Div 2
Problem :- C - Boredom
Approach :- Standard DP , DP[0]=1 , DP[1]= count of (1)
            and for other (2 <= i <= n ) DP[i] = max( DP[i-1] , DP[i-2]+ count OF (i)*i)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int>A(100001,0);
    
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        A[x]++;
    }
    
 
    
  
    vector<long long> dp(100001,0);
    dp[0]=0;
    for(int i=1;i<=100000;++i){
        if(A[i]){
        if(i==1){
            dp[i]=A[i];
        }
        else{
            long long temp=i;
            temp*=A[i];
            temp+=dp[i-2];
            dp[i]=max(dp[i-1],temp);
        }
        }
        else{
            if(i==1){
                dp[i]=A[i];
                continue;
            }
             dp[i]=max(dp[i-1],dp[i-2]);
        }
    }
    
    
    cout<<dp[100000]<<endl;
}
