/*
Platform :- Codeforces 
Contest :- Codeforces Round 721
Problem :- C - Sequence Pair weight 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        map<long long,long long>P;
        long long ans=0;
        for(int i=0;i<n;++i){
            long long x;
            cin>>x;
            
            ans+=(P[x]*(n-i));
            P[x]+=i+1;
        }
        cout<<ans<<endl;
    }
}
