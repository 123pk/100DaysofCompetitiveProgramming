/*
Platform :- Leetcode
Contest :- Weekly contest 237
Problem :- Maximum Ice Bars
*/
class Solution {
public:
    int maxIceCream(vector<int>& cost, int coins) {
        sort(cost.begin(),cost.end());
        
        int ans=0;
        for(int i=0;i<cost.size();++i){
            if(cost[i]<=coins){
                coins-=cost[i];
                ans++;
            }
            else break;
        }
        return ans;
        
    }
};
