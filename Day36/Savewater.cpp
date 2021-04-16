/*
Platform :- Codechef
Contest :- SPYBITS IIT BHU
Problem :- Savewater
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long H,x,y,c;
        cin>>H>>x>>y>>c;
        
        long long temp=x+(y/2);
        temp*=H;
        
        if((temp<=c))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
