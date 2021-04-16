/*
Platform :- Codeforces
Contest :- Codeforces Round 715 Div 2
Problem :- A - Average Height
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        vector<long long>B,C;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]%2){
                B.push_back(A[i]);
            }
            else C.push_back(A[i]);
        }
        
        for(auto x:B)cout<<x<<" ";
        for(auto x:C)cout<<x<<" ";
        cout<<endl;
    }
}
