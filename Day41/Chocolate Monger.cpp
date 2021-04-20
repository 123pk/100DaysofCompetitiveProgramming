/*
Platform :- Codechef
Contest :- Codechef April cook off 2021 Div 2
Problem :- Chocolate Monger
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,x;
        cin>>n>>x;
        
        long long A[n];
        set<long long>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P.insert(A[i]);
        }
        
        int k=n-x;
        int temp=P.size();
        if(temp<k){
            cout<<temp<<endl;
        }
        else cout<<k<<endl;
    }
}
