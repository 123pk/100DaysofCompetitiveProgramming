/*
Platform :- Codechef
Contest :-  April starters Codechef
Problem :- Maximum Size
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
    
    int n,m;
    cin>>n>>m;
    
    int A[n][m];
    vector<pair<int,int>>temp;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            char ch;
            cin>>ch;
            
            if(ch=='1')A[i][j]=1;
            else A[i][j]=0;
            
            if(A[i][j])temp.push_back({i,j});
        }
    }
    
     map<pair<int,int>,int> visited;
     vector<int>ans;
     
    for(int i=0;i<temp.size();++i){
        if(visited[{temp[i].first,temp[i].second}]){
            continue;
        }
        
        queue<pair<int,int>>P;
        P.push({temp[i].first,temp[i].second});
        visited[{temp[i].first,temp[i].second}]=1;
        
        int count=1;
        while(!P.empty()){
            int c=P.size();
            for(int j=1;j<=c;++j){
                pair<int,int>temp2=P.front();
                P.pop();
                
                int x=temp2.first;
                int y=temp2.second;
                
                if((x+1)<n){
                    if(visited[{x+1,y}]==0){
                        if(A[x+1][y]){
                            count++;
                            P.push({x+1,y});
                            visited[{x+1,y}]=1;
                        }
                    }
                }
                
                if((x-1)>=0){
                    if(visited[{x-1,y}]==0){
                        if(A[x-1][y]){
                            count++;
                            P.push({x-1,y});
                            visited[{x-1,y}]=1;
                        }
                    }
                }
                
                if((y+1)<m){
                    if(visited[{x,y+1}]==0){
                        if(A[x][y+1]){
                            count++;
                            P.push({x,y+1});
                            visited[{x,y+1}]=1;
                        }
                    }
                }
                if((y-1)>=0){
                    if(visited[{x,y-1}]==0){
                        if(A[x][y-1]){
                            count++;
                            P.push({x,y-1});
                            visited[{x,y-1}]=1;
                        }
                    }
                }
            }
        }
        ans.push_back(count);
    }
    sort(ans.begin(),ans.end(),greater<int>());
     
    int tot=0;
    for(int i=1;i<ans.size();i+=2){
        tot+=ans[i];
    }
    cout<<tot<<endl;
    
    }
}
