/*
Platform :- Codechef
Problem :- Suffix sort
Contest :- International coding marathon 2
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long,long long>P,pair<long long,long long>Q){
    return P.first<Q.first;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<long long>B(n);
        vector<long long>A(n);
        for(int i=0;i<n;++i){
            cin>>A[i];
            B[i]=A[i];
        }
        
        sort(B.begin(),B.end());
        
        int ans=0;
        if(A==B){
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
        else{
            int f=0;
          int g=0;
           vector<long long>P;
            int index=0;
            for(int i=1;i<n;++i){
                 
                 if(g){
                     P.push_back(A[i]);
                  }
                  else {
                      if(A[i]<A[i-1]){
                     g=1;
                     index=i;
                     P.push_back(A[i]);
                      }
                 }
                 
            }
             for(int i=0;i<index;++i){
                 P.push_back(A[i]);
             }
            
            
            if(P!=B)cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                
                cout<<1<<endl;
            }
        }
        
        
    }
}
