/*
Platform :- Codeforces
Contest :- Educational round 109
Problem :- B - Permutaion sort
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int f=0;
        int A[n];
         
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]!=(i+1)){
                f=1;
            }

        }
         
        if(f==0)cout<<0<<endl;
        else{
              if(A[0]==1)cout<<1<<endl;
              else if(A[n-1]==n)cout<<1<<endl;
              else if(A[0]==n && A[n-1]==1)cout<<3<<endl;
              else cout<<2<<endl;
        }
        
        
    } 
    
}
