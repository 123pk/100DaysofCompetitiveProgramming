/*
Platform :- Codechef
Problem :- CONDEL
Contest :- Codechef March Cook off 2021
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int A[n];
        long long ans=0;
        long long d=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            d+=A[i];
        }
        
        long long temp=0;
        long long mx=1e9;
        for(int i=0;i<k;++i){
          temp+=A[i];
        }
        mx=min(mx,temp);
        
        for(int i=k;i<n;++i){
            if(A[i])temp++;
            if(A[i-k])temp--;
            mx=min(mx,temp);
        }
        d-=mx;
        ans+=d;
        ans+=((mx*(mx+1))/2);
        cout<<ans<<endl;
    }
}
