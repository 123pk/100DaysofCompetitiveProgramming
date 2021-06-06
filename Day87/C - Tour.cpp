/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 204
Problem :- C - Tour
Approach :- do BFS for all values from 1 to n , and find all the distinct pairs you can visit ,ans is  ( n+( total_distinct_pairs) )
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<long long>A[n];
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        
        u--;
        v--;
        A[u].push_back(v);
    }
    
    int ans=n;
    set<pair<int,int>>Q;
    for(int i=0;i<n;++i){
        queue<int>R;
        R.push(i);
        set<int>visited;
        visited.insert(i);
       // cout<<i+1<<endl;
        while(!R.empty()){
            
            int c=R.size();
            for(int j=1;j<=c;++j){
                int temp=R.front();
               // cout<<temp<<" start "<<endl;
                R.pop();
                
                for(int k=0;k<A[temp].size();++k){
                    if(visited.find(A[temp][k])==visited.end()){
                        visited.insert(A[temp][k]);
                        Q.insert({i,A[temp][k]});
                        R.push(A[temp][k]);
                       // cout<<A[temp][k]<<em
                    }
                }
            }
        }
    }
    
    ans+=Q.size();
    cout<<ans<<endl;
    
}
