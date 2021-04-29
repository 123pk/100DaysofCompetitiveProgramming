/*
Platform :- Codeforces
Contest :- Educational Round 108
Problem :- The Cake is a lie
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        
        int temp=n*m;
        temp-=1;
        if(temp==k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
