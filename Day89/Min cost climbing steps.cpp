/*
Platform :- Leetcode
Problem :- Min cost climbing steps
Approach :- It is one of standard dp problem of steps ,here dp[0]=cost[0]  and dp[1]=cost[1] and for ( 2 <= i <= cost.size()-1 )
            dp[i] = cost[i] + min( dp[i-1], dp[i-2] ) 
 */
