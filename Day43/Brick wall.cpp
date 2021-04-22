/*
Platform :- Leetcode
Problem :- Brick wall
Event :- April Daily challenge
Hint :- Find the cut point of all rows ( prefix sum ) and we store frequency of each point , we choose cut point with most number of occurence and before the end point of wall 
        . Our answer is ( total no or rows in wall - max count of wall point )
*/
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        int mn=INT_MAX;
        map<int,int>P;
        
        for(int i=0;i<wall.size();++i){
            int temp=0;
            for(int j=0;j<wall[i].size();++j){
                temp+=wall[i][j];
                P[temp]++;    
            }
            mn=temp;
        }
        
        int count=0;
        for(auto x:P){
            if(x.first<mn){
                if(count<x.second){
                    count=x.second;
                }
            }
        }
      
        int ans=wall.size()-count;
        return ans;
    }
};
