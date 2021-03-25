/*
Platform :- Codeforces
Problem :- D - Epic Transformation
Contest :- Coddeforces Round #703 Div 3
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
          int n;
          cin>>n;
          
          long long A[n];
          map<long long,int>P;
          for(int i=0;i<n;++i){
              cin>>A[i];
              P[A[i]]++;
          }
         // priority_queue<pair<int,long long>>Q;
          long long ans=0;
          int mx=-1;
          int temp=n/2;
          temp++;
          for(auto x:P){
               //Q.push({x.second,x.first});
               mx=max(mx,x.second);
          }
          
          if(P[A[0]]==n){
              cout<<n<<endl;
              continue;
          }
          
          if((temp<=mx)){
              cout<<(n-((n-mx)*2))<<endl;
          }
          else if(n%2)cout<<1<<endl;
          else{
              cout<<0<<endl;
          }
          
    }
}
