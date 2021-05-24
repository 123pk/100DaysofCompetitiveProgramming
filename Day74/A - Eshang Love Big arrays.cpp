/*
Platform :- Codeforces 
contest :- Codeforces Round 722
Problem :- A - Eshang Love Big Arrays
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        map<long long,int>P;
        long long A[n];
        long long mn=1e18;
        int mx=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]]++;
            mn=min(mn,A[i]);
        }
        mx=P[mn];
        cout<<(n-mx)<<endl;
    }
}
