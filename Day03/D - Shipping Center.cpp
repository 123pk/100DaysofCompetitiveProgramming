/*
Platform :- Atcoder
Problem :- D - Shipping Center
Contest :- Panasonic Programming Contest (AtCoder Beginner Contest 195)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
      int n,m,q;
      cin>>n>>m>>q;
      
      vector<pair<long long,long long>>P;
      for(int i=0;i<n;++i){
          long long x,y;
          cin>>x>>y;
          
          P.push_back({x,y});
      }
      
      vector<long long>Q;
      for(int i=0;i<m;++i){
          long long x;
          cin>>x;
          Q.push_back(x);
      }
      
      for(int i=0;i<q;++i){
          int l,r;
          cin>>l>>r;
          l--;
          r--;
          vector<long long>z;
          for(int j=0;j<l;++j){
              z.push_back(Q[j]);
          }
          
          for(int j=r+1;j<m;++j){
              z.push_back(Q[j]);
          }
          
          sort(z.begin(),z.end());
          map<int,int>mp;
          long long tot=0;
          for(int j=0;j<z.size();++j){
              long long mx=0;
              int index=0;
              for(int i=0;i<n;++i){
                  if(mp[i+1])continue;
                  if(z[j]>=P[i].first){
                      if(mx<P[i].second){
                          mx=P[i].second;
                          index=i+1;
                      }
                  }
              }
              tot+=mx;
              mp[index]++;
          }
          
          cout<<tot<<endl;
      }
    
}
