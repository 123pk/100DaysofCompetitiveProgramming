/*
Platform :- Codechef
Problem :- NUMCOMP1
Contest :- Codechef Lunchtime
Hint :- Seive of eratosthenes , (no of prime between (n/2)+1 and n) + 1
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=1e7;
    bool prime[N+1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= N; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
    int c=0;
    vector<int>P(N);
    for(int i=2;i<=N;++i){
        if(prime[i]){
            c++;
        }
        P[i]=c;
    }
    
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        long long temp=(n/2);
       
        temp=max(temp,2ll);
        
        if(temp==n){cout<<1<<endl;continue;}
        
        long long low=P[temp];
        
        long long high=P[n];
       // cout<<high<<" "<<low<<endl;
        int ans=0;
         ans++;
        ans+=max(1ll,(high-low));
       // cout<<P[high]<<" "<<P[low]<<endl;
        cout<<ans<<endl;
    }
}
