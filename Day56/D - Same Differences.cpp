/*
Platform :- Codeforces 
contest :- Codeforces Round #719 Div 3
Problem :- D - Same Differences
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        map<long long,long long>P,Q;
        for(int i=0;i<n;++i){
            long long z=A[i]-(i+1);
            P[z]++;
        }
        
        long long ans=0;
        for(auto x:P){
           // cout<<x.first<<" "<<x.second<<endl;
            long long temp=(x.second);
            temp*=(x.second-1);
            temp/=2;
            //cout<<ans<<" "<<temp<<endl;
            ans+=temp;
        }
        cout<<ans<<endl;
    }
}
