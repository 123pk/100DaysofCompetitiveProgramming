/*
Platform :- Codeforces
Contest :- Codeforces Round 609
Problem :- B - Modulo Equality
*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    long long m;
    cin>>n>>m;
    
    vector<long long> A(n),B(n);
  
    for(int i=0;i<n;++i){
       cin>>A[i];
    }
    for(int i=0;i<n;++i){
        cin>>B[i];
    }
 
    sort(B.begin(),B.end());
     
    vector<long long>temp;
     for(int i=0;i<n;++i){
         if(B[0]>=A[i])temp.push_back(B[0]-A[i]);
         else temp.push_back(B[0]+m-A[i]);
     }
     sort(temp.begin(),temp.end());
     
     long long ans=0;
     for(int i=0;i<n;++i){
         vector<long long> C=A;
         for(int j=0;j<n;++j){
             C[j]+=temp[i];
             C[j]%=m;
         }
         sort(C.begin(),C.end());
         if(C==B){
             ans=temp[i];break;
         }
     }
     cout<<ans <<endl;
}
