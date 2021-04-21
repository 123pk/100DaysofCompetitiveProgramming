/*
Platform :- Codeforces 
Contest :- Codeforces Round #717 Div 2
Problem :- A - Tit for tat
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
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        for(int i=0;i<n-1;++i){
            if(k){
                int temp=A[i];
                int z=min(temp,k);
                k-=z;
                A[i]-=z;
                A[n-1]+=z;
            }
            else break;
        }
        
         
        for(auto x:A)cout<<x<<" ";
        cout<<endl;
    }
}
