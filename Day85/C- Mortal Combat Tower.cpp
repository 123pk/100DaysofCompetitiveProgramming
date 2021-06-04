/*
Platform :- Codeforces
Problem :- C - Mortal Combat Tower
Contest :- Educational Round 95
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int A[n];
        for(int i=0;i<n;++i)cin>>A[i];
        
        int count=0;
        if(A[0]==1)count++;
        
        for(int i=1;i<n;++i){
            if(A[i]==0)continue;
            
            int j=i;
            int d=0;
            while(j<n && A[j]==1){
                d++;
                j++;
            } 
            count+=(d/3);
            i=j-1;
        }
        cout<<count<<endl;
    }
}
