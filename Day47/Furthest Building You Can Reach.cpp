/*
Platform :- Leetcode
Problem :- Furthest Building You Can Reach
Event :- April Daily challenge
*/
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        int tot=0;
        int i=0;
        priority_queue<int>Z;
        for(i=1;i<heights.size();++i){
             if(heights[i]>heights[i-1]){
                 tot+=heights[i]-heights[i-1];
                 Z.push(heights[i]-heights[i-1]);
             }
             
            if(tot>bricks){
                if(ladders>0){
                    ladders--;
                    tot-=Z.top();
                    Z.pop();
                }
                else break;
            }
         }
        
        int ans=i-1;
        return ans;
    }
};
