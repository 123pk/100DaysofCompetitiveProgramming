/*
Platform :- Codeforces
Problem :- A - Strange Table
Contest :- Codeforces Round #710 Div 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n,m,x;
        cin>>n>>m>>x;
        
        long long r=(x/n);
        if(x%n)r++;
        long long c=(x%n) ;
        if(x%n==0){
            c=n;
        }
        //cout<<c<<" "<<r<<endl;
        c=(c-1)*m;
        c+=r;
  
        cout<<c<<endl;
    }
}
