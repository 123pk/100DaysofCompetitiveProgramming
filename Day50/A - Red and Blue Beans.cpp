/*
Platform :- Codeforces
Contest :- Educational Round 108
Problem :- A - Red and Blue Beans
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,d;
        cin>>a>>b>>d;
        
        long long  temp=min(a,b);
        long long temp2=max(a,b);
        
        long long ans=(1+d)*temp;
        if(ans<temp2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
