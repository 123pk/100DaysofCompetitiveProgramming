/*
Platform :- Codeforces
Contest :- Codeforces Global Round 14
Problem :- B - Phoenix and Puzzle
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
       long long n;
       cin>>n;
       
       if(n%2)cout<<"NO"<<endl;
       else{
           long long x=sqrt(n);
           x*=x;
           
           long long temp=n/2;
           long long z=sqrt(temp);
           z*=z;
           if(z==temp || x==n)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
    }
}
