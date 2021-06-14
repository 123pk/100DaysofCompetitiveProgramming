/*
Platform :- Codeforce
Contest :- Codeforces LATOKEN Round 1 (Div. 1 + Div. 2)
Problem :- B - Histogram Ugliness
Approach :- First calculate the current ugliness of array then try to remove all such ugliness where A[i] is local maxima , for i=0 and i==n-1 if 
            they are greater than their surrounding element then also make them equal to surrounding element and change the ugliness accordingly
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
          int n;
          cin>>n;
          
          long long A[n];
          for(int i=0;i<n;++i){
              cin>>A[i];
          }
          if(n==1){
              cout<<A[0]<<endl;
              continue;
          }
          
          long long ans=0;
          
          //calculating current ugliness
          for(int i=0;i<n;++i){
              if(i==0){
                  ans+=A[i];
              }
              else if(i==n-1){
                  ans+=A[i];
                  ans+=abs(A[i]-A[i-1]);
              }
              else{
                  ans+=abs(A[i]-A[i-1]);
              }
          }
          
          
          
          for(int i=0;i<n;++i){
              if(i==0||i==n-1){
                 if(i==0){
                     if(A[i]>A[i+1]){
                         ans-=(A[i]-A[i+1]);
                         A[i]=A[i+1];
                     }
                 }
                 else{
                     if(A[i]>A[i-1]){
                         ans-=(A[i]-A[i-1]);
                         A[i]=A[i-1];
                     }
                 }
              }
              else{
                  if(A[i]>A[i-1] && A[i]>A[i+1]){
                      long long temp=(A[i]-A[i-1]);
                      long long temp2=(A[i]-A[i+1]);
                      if(temp>temp2){
                          ans-=temp2;
                          A[i]=A[i+1];
                      }
                      else{
                          ans-=temp;
                          A[i]=A[i-1];
                      }
                  }
                   
              }
          }
          
         
          cout<<ans<<endl;
    }
}
