/*
Platform :- Leetcode
Problem :- Min cost climbing steps
Approach :- It is one of standard dp problem of steps ,here dp[0]=cost[0]  and dp[1]=cost[1] and for ( 2 <= i <= cost.size()-1 )
            dp[i] = cost[i] + min( dp[i-1], dp[i-2] ) 
 */
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int dp[n];
        dp[0]=cost[0];
        dp[1]=cost[1];
        
        for(int i=2;i<n;++i){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        
        return min(dp[n-1],dp[n-2]);
    }
};
