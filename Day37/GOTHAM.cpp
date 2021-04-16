/*
Platform :- Codechef
Contest :- SPYBITS IIT BHU
Problem :- GOTHAM
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    long long A[n];
    set<int>P;
    for(int i=0;i<n;++i){
        cin>>A[i];
        P.insert(i);
    }
    
    int q;
    cin>>q;
    
    while(q--){
        int x;
        long long k;
        cin>>x>>k;
        
        x-=1;
        auto it =P.lower_bound(x);
        long long ans=0;
        
        while(it!=P.end()  &&k>0){
            int z=*it;
            int d=z-x;
            long long temp=min(A[z],k);
            A[z]-=temp;
            k-=temp;
            ans+=(temp*d);
            if(A[z]==0)P.erase(it);
            it=P.lower_bound(x);
        }
        
        cout<<ans<<endl;
    }
}
