/*
Platform :- Atcoder
Problem :- C - Made Up
Contest :- Atcoder Beginner Contest 202
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      
      int A[n],B[n],C[n];
      map<long long,long long>P,Q;
      vector<pair<int,int>>temp;
      for(int i=0;i<n;++i){
          cin>>A[i];
          P[A[i]]++;
      }
      for(int i=0;i<n;++i){
          cin>>B[i];
          if(P[B[i]])temp.push_back({B[i],i+1});
      }
      for(int i=0;i<n;++i){
          cin>>C[i];
          Q[C[i]]++;
      }
      
      long long ans=0;
      
      for(auto x:temp){
          long long z=P[x.first]*Q[x.second];
          ans+=z;
      }
      cout<<ans<<endl;
      
}
