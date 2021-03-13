/*
Platform :- Codeforces
Problem :- B - Napolean Cake
Contest :- Codeforces Round 707 #Div 2
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
        
        map<int,int>P;
        int start=0;
        for(int i=n-1;i>=0;--i){
            start=max(start,A[i]);
            
            if(start){
                start--;
                P[i+1]=1;
            }
            
        }
        
        for(int i=1;i<=n;++i){
            cout<<P[i]<<" ";
        }
        cout<<endl;
    }
}
