/*
Platform :- Atcoder
Problem :- B - savings
Contest :- Atcoder Beginner Contest 206
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     
     long long A[n];
     map<long long,int>P;
     vector<long long>temp;
     for(int i=0;i<n;++i){
         cin>>A[i];
         P[A[i]]++;
         if(P[A[i]]==1)temp.push_back(A[i]);
     }
     
     sort(temp.begin(),temp.end());
     long long ans=0;
     int sz=n;
     for(int i=temp.size()-1;i>=0;--i){
         long long z=sz-P[temp[i]];
         z*=P[temp[i]];
         ans+=z;
         sz-=P[temp[i]];
     }
     
     cout<<ans<<endl;
}
