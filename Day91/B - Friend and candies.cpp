/*
Platform :- Codeforces 
Problem :- B - Friend and candies
Contest :- Codeforces Round 725 Div 3
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
        map<long long,int>P;
        long long tot=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]]++;
            tot+=A[i];
        }
        
        if(tot%n){
            cout<<"-1"<<endl;
            continue;
        }
        
        int ans=0;
        long long z=tot/n;
        sort(A,A+n);
        for(int i=n-1;i>=0;--i){
            if(A[i]>z){
                ans++;
            }else break;
        }
        
        cout<<ans<<endl;
    }
}
