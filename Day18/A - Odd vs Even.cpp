/*
Platform :- Atcoder
problem :- A - Odd vs Even
Contest :- Atcoder Regular contes 116
*/
#include<bits/stdc++.h>
using namespace std;
 

int main(){
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        if(n%2){
            cout<<"Odd"<<endl;
        }
        else{
             if(n==2){
                 cout<<"Same"<<endl;
             }
             else{
                 n/=2;
                 if(n%2){
                     cout<<"Same"<<endl;
                 }
                 else cout<<"Even"<<endl;
             }
        }
    }
}
