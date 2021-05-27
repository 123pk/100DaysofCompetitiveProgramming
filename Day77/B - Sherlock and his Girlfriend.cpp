/*
Platform :- Codeforces
Problem :- B - Sherlock and his Girlfriend
Contest :- contest: ICM Technex 2017 and Codeforces Round #400 (Div. 1 + Div. 2, combined)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     
     if(n<=2){
       cout<<"1\n";
         for(int i=1;i<=n;++i)cout<<"1 ";
         
     }
     else{
         cout<<2<<endl;
         long long A[100005]={0};
         for(int i=2;i<=(n+1);++i){
             for(int j=i+i;j<=(n+1);j+=i){
                 A[j]=1;
             }
         }
         
         for(int i=2;i<=n+1;++i){
             if(A[i]==0)cout<<2<<" ";
             else cout<<1<<" ";
         }
        
     }
}
