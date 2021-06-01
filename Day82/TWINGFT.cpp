/*
Platform :- Codechef
Problem :- TWINGFT
Contest :- Codechef lunchtime
Approach :- take in mind thaat in last move one playe two values , we need to maximise our score so we will sort the array in decreasing order 
            then in alternate turn we will choose the max value left except for last turn . 
            The one with maximum value is our solution
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
       int n,k;
       cin>>n>>k;
       
       long long A[n];
       for(int i=0;i<n;++i)cin>>A[i];
       
       sort(A,A+n,greater<long long>());
       
       long long tot1=0,tot2=0;
       k*=2;
       for(int i=0;i<k;++i){
           if(k==(i+1))tot2+=A[i]+A[i+1];
           else {
               if(i%2)tot2+=A[i];
               else tot1+=A[i];
           }
          
       }
       
       long long ans=max(tot1,tot2);
       cout<<ans<<endl;
    }
}
