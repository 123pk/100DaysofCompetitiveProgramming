/*
Platform :- Codeforces 
Contest:- Codeforces Round 713 Div 3
Problem :- A - Spy Detected !
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
        for(int i=0;i<n;++i){
            
            cin>>A[i];
            P[A[i]]++;
        }
        
        long long temp=0;
        if(A[0]==A[1]){
            temp=A[0];
        }
        else if(A[1]==A[2]){
            temp=A[1];
        }
        else if(A[0]==A[2]){
            temp=A[0];
        }
        
        int index=0;
        for(int i=0;i<n;++i){
            if(temp!=A[i]){
                index=i+1;
                break;
            }
        }
        
        cout<<(index)<<endl;
    }
}
