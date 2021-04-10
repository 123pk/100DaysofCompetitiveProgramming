/*
Platform :- Codeforces 
Problem :- D - Corrupted Array
Contest :- Codeforces Round 713 Div 3
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n+2];
        map<long long ,int>P;
        for(int i=0;i<(n+2);++i){
            cin>>A[i];
            P[A[i]]++;
            
        }
        
        sort(A,A+(n+2));
        
        long long tot=0;
        
        for(int i=0;i<n;++i){
            tot+=A[i];
        }
        
        if(tot==A[n]){
            for(int i=0;i<n;++i){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }
        else{
            long long temp=tot+A[n];
            long long z=temp-A[n+1];
            P[A[n+1]]--;
            if(P[z]){
                P[z]--;
                for(int i=0;i<(n+1);++i){
                    if(P[A[i]]>0){
                        cout<<A[i]<<" ";
                        P[A[i]]--;
                    }
                }
                cout<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    }
}
