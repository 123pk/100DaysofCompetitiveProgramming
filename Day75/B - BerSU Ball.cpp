/*
Platform :- Codeforces 
Contest :- Codeforces Round #277.5 Div 2
Problem :- B - berSU ball
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    long long A[n];
    for(int i=0;i<n;++i)cin>>A[i];
    int m;
    cin>>m;
    
    long long B[m];
    for(int i=0;i<m;++i)cin>>B[i];
    
    sort(A,A+n);
    sort(B,B+m);
    
    int ans=0;
    
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(abs(A[i]-B[j])<=1){
                ans++;
                B[j]=1000;
                break;
            }
        }
    }
    
    cout<<ans<<endl;
}
