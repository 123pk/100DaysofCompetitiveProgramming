/*
Platform :- Atcoder
Contest :- Japanese Student Championship
Problem :- B - Xor Sequence
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,m;
     cin>>n>>m;
     
     long long A[n];
     map<long long,int>P;
     for(int i=0;i<n;++i){
         cin>>A[i];
         P[A[i]]++;
     }
     
     long long B[m];
     for(int i=0;i<m;++i){
         cin>>B[i];
         P[B[i]]++;
     }
     
     for(auto x:P){
         if(x.second==1)cout<<x.first<<" ";
     }
     cout<<endl;
}
