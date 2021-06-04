/*
Platform :- Codeforces 
problem :- D2 - Sage Birthday
Contest :- Codeforces Round 671
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    long long A[n];
    for(int i=0;i<n;++i)cin>>A[i];
    sort(A,A+n);
    
    if(n<=2){
        cout<<0<<endl;
        for(auto x:A)cout<<x<<" ";
        exit(0);
    }
    
    int m=n/2;
    int lim=m;
    int i=0;
    vector<long long>B;
    while(1){
        if(m<n)B.push_back(A[m]);
        m++;
        if(i<lim)B.push_back(A[i]);
        else break;
        i++;
        
    }
    
    int count=0;
    for(int i=1;i<n-1;++i){
        if(B[i]<B[i-1] && B[i]<B[i+1])count++;
    }
    
    cout<<count<<endl;
    for(auto x:B)cout<<x<<" ";
    cout<<endl;
}
