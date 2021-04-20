/*
Platform :- Codechef
Contest :- Codechef April Cook off 2021
Problem :- OROFAND
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n,q;
         cin>>n>>q;
         
         long long A[n];
         vector<int>P(32,0);
         for(int i=0;i<n;++i){
             cin>>A[i];
             string temp=bitset<32>(A[i]).to_string();
             reverse(temp.begin(),temp.end());
             
             for(int j=0;j<32;++j){
                 if(temp[j]=='1')P[j]++;
             }
         }
         
         long long ans=0;
         for(int i=0;i<32;++i){
             if(P[i]){
                 ans+=pow(2,i);
             }
         }
         cout<<ans<<endl;
         
         for(int i=0;i<q;++i){
             int x;
             long long y;
             cin>>x>>y;
             x--;
             
             string temp1=bitset<32>(y).to_string();
             reverse(temp1.begin(),temp1.end());
             
             for(int j=0;j<32;++j){
                 if(temp1[j]=='1'){
                     P[j]++;
                 }
             }
             
             string temp2=bitset<32>(A[x]).to_string();
             reverse(temp2.begin(),temp2.end());
             
             for(int j=0;j<32;++j){
                 if(temp2[j]=='1'){
                     P[j]--;
                 }
             }
             A[x]=y;
             long long sol=0;
             for(int j=0;j<32;++j){
             if(P[j]){
                 sol+=pow(2,j);
             }
             }
             cout<<sol<<endl;
         }
    }
}
