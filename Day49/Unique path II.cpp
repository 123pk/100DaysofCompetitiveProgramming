/*
Platform :- Leetcode
Problem :- Unique Path II
Event :- Leetcode April Daily challenge
Hint :-  Number of ways to reach any index (i,j) is sum of number of ways to reach to index (i-1,j) and index (i,j-1) valid indexes.
*/
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& A) {
        
        int n=A.size();
        int m=A[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        
        for(int i=0;i<A.size();++i){
            for(int j=0;j<A[i].size();++j){
                if(i==0||j==0){
                    if(i==0 && j==0){
                        if(A[i][j]==0)dp[i][j]=1;
                    }
                    else if(i==0){
                        if(A[i][j]==0)dp[i][j]=dp[i][j-1];
                    }
                    else{
                        if(A[i][j]==0)dp[i][j]=dp[i-1][j];
                    }
                }
                else{
                    if(A[i][j]==0)dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[n-1][m-1];
    }
};
