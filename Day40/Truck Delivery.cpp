/*
Platform :- Coding Competition with google
Contest :- Google Kickstart Round B 2021
Problem :- Truck Delivery
Hint :- Bruteforce BFS from given node to node 1 (Partial Correct)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        int n,q;
        cin>>n>>q;
        
        vector<vector<long long>>A[n];
        for(int i=1;i<n;++i){
            int x,y;
            long long lim,c;
            cin>>x>>y>>lim>>c;
            
            x--;
            y--;
            A[x].push_back({y,lim,c});
            A[y].push_back({x,lim,c});
        }
        
        
        for(int i=0;i<q;++i){
            int y;
            long long load;
            cin>>y>>load;
            y--;
            
            queue<pair<long long,long long>>P;
            P.push({y,0});
            
            set<long long>visited;
            visited.insert(y);
            long long ans=0;
            int f=0;
            while(!P.empty()){
                int c=P.size();
                for(int j=1;j<=c;++j){
                    pair<long long,long long>temp=P.front();
                    P.pop();
                    
                    for(int k=0;k<A[temp.first].size();++k){
                        long long z=A[temp.first][k][0];
                        
                        if(visited.find(z)==visited.end()){
                            visited.insert(z);
                            
                            long long lim=A[temp.first][k][1];
                            long long tax=A[temp.first][k][2];
                            long long val=temp.second;
                            
                            if(lim<=load){
                                val=__gcd(val,tax);
                            }
                            //cout<<z<<" "<<val<<endl;
                            
                            if(z==0){
                                ans=val;
                                f=1;break;
                            }
                            else{
                                P.push({z,val});
                            }
                        }
                    
                    }
                    if(f)break;
                }
                if(f)break;
            }
            
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}
