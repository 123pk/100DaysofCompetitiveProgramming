/*
Platform :- Codeforces
Problem :- A - GCD
Contest :- Codeforces Round 711 Div 2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        while(1){
            
            long long temp=n;
        long long tot=0;
        while(temp){
            tot+=temp%10;
            temp/=10;
        }
        
        if(__gcd(n,tot)>1)break;
        n++;
        }
        
        cout<<n<<endl;
    }
}
