/*
Platform :- Leetcode
Problem :- Keys and Rooms
Hint :- BFS + visisted array
*/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int mx=0;
        for(auto x:rooms){
            for(auto y:x){
                mx=max(mx,y);
            }
        }
        vector<int> visited(mx+1,0);
        queue<int>P;
        P.push(0);
        
        while(!P.empty()){
            int c=P.size();
            for(int i=1;i<=c;++i){
                int x=P.front();
                
                P.pop();
                if(visited[x])continue;
                for(int j=0;j<rooms[x].size();++j){
                    if(visited[rooms[x][j]])continue;
                    P.push(rooms[x][j]);
                }
                visited[x]++;
            }
        }
        
        for(int i=0;i<=mx;++i){
            if(visited[i]==0)return false;
        }
        return true;
    }
};
