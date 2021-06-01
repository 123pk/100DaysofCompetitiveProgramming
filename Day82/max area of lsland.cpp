/*
Platform :- Leetcode
Problem :- Max Area of Island
Approach :- i. find all the index where there is land ( represented by '1' in grid ) ,
            ii. maintian a visited array to check whether a index is already visited or not
            iii. if index is not visited and have a land then we will start BFS in all the four directions and check for valid indexes and increment our count if found 
                 island , we will mark that index as visited and return the max value at the end 
*/

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        // we will take care of visited indices of grid
        map<pair<int,int>,int>visited;
        
       //storing all the land or indexes containing '1' in grid
        vector<pair<int,int>>island; 
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[i].size();++j){
                if(grid[i][j]){
                    island.push_back({i,j});
                }
            }
        }
        
         
         // main idea is to perform bfs whenever we find an island or grid with value 1
        int ans=0;
        for(int i=0;i<island.size();++i){
            
            // if that cell is not visited we will start BFS
            if(visited[{island[i].first,island[i].second}]==0){
                
                queue<pair<int,int>>new_island;
                int count=0;
                 new_island.push({island[i].first,island[i].second});
               
                visited[{island[i].first,island[i].second}]=1;
                
                while(!new_island.empty()){
                    int c=new_island.size();
                   
                    for(int j=1;j<=c;++j){
                        pair<int,int>temp=new_island.front();
                        new_island.pop();
                        
                        int x=temp.first;
                        int y=temp.second;
                    
                        count++;
                        
                        // We will look for all the valid cells we can go and push them in queue for BFS 
                        if((x+1)<n){
                            if(grid[x+1][y]==1 && visited[{x+1,y}]==0){

                                visited[{x+1,y}]=1;
                                new_island.push({x+1,y});
                            }
                        }
                        
                        if((x-1)>=0){
                            if(grid[x-1][y]==1 && visited[{x-1,y}]==0){
 
                                visited[{x-1,y}]=1;
                                new_island.push({x-1,y});
                            }
                        }
                        if((y+1)<m){
                            if(grid[x][y+1]==1 && visited[{x,y+1}]==0){
                              
                                visited[{x,y+1}]=1;
                                new_island.push({x,y+1});
                            }
                        }
                        if((y-1)>=0){
                            if(grid[x][y-1]==1 && visited[{x,y-1}]==0){
                                  
                                visited[{x,y-1}]=1;
                                new_island.push({x,y-1});
                            }
                        }
                        
                    }
                }
                //store the max count in ans
                 ans=max(ans,count);
            }
        }
        
        return ans;
    }
};
