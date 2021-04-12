/*
Platform :- Codeforces
Contest :- Educational Round 107 
Problem :- A - Review Site
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int ans=0;
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]!=2)ans++;
        }
        cout<<ans<<endl;
    }
}
