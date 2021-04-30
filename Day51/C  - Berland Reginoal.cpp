/*
Platform :- Codeforces
Contest :- Educational round 108
Problem :- C - Berland Reginoal
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long,long long>P,pair<long long,long long>Q){
    return P.second<Q.second;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        set<long long>Z;
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
            Z.insert(A[i]);
        }
        
        long long tot=0;
        long long B[n];
        vector<pair<long long ,long long>>P;
        for(int i=0;i<n;++i){
            cin>>B[i];
            tot+=B[i];
            P.push_back({A[i],B[i]});
        }
        
        sort(P.begin(),P.end(),comp);
        
        vector<long long>Q[n+1];
        for(auto x:P){
            if(Q[x.first].size()==0){
                Q[x.first].push_back(x.second);
            }
            else{
                long long temp=Q[x.first][Q[x.first].size()-1];
                temp+=x.second;
                Q[x.first].push_back(temp);
            }
        }
        
        
        
        vector<int>variety;
        for(auto x:Z)variety.push_back(x);
        
        int g=0;
        
        vector<long long>ans(n,0);
        for(auto x:Q){
            for(int i=1;i<=x.size();++i){
               int index=x.size()%i;
               ans[i-1]+=x[x.size()-1];
               if(index)ans[i-1]-=x[index-1];
            }
        }
        
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
    }
}
