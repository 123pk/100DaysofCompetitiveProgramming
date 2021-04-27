/*
Platform :- Leetcode
Problem :- 200.Number of Islands
*/
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        map<pair<int,int>,int>visited;
         
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
            if(grid[i][j]=='0')continue;
            if(visited[{i,j}])continue;
            
            queue<pair<int,int>>Q;
            Q.push({i,j});
            visited[{i,j}]=1;
                
            while(!Q.empty()){
               int c=Q.size();
                for(int j=1;j<=c;++j){
                    pair<int,int>temp=Q.front();
                    int x=temp.first;
                    int y=temp.second;
                    Q.pop();
                    
                  //  cout<<(x+1)<<" "<<(y+1)<<endl;
                    
                    if((x+1)<n){
                        if(visited[{x+1,y}]==0){
                            if(grid[x+1][y]=='1'){
                            visited[{x+1,y}]=1;
                            Q.push({x+1,y});
                            }
                        }
                    }
                    if((x-1)>=0){
                        if(visited[{x-1,y}]==0){
                            if(grid[x-1][y]=='1'){
                            visited[{x-1,y}]=1;
                            Q.push({x-1,y});
                            }
                        }
                    }
                    if((y+1)<m){
                        if(visited[{x,y+1}]==0){
                            if(grid[x][y+1]=='1'){
                            visited[{x,y+1}]=1;
                            Q.push({x,y+1});
                            }
                        }
                    }
                    if((y-1)>=0){
                        if(visited[{x,y-1}]==0){
                            if(grid[x][y-1]=='1'){
                            visited[{x,y-1}]=1;
                            Q.push({x,y-1});
                            }
                        }
                    }
                }
            }
             
            ans++;
            }
        }
        
        return ans;
    }
};
