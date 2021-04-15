/*
Platform :- Leetcode
Problem :- Fibonacci
Event :- April Daily challenge
*/
class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;
        int s=0,t=1,ans=0;
        for(int i=2;i<=n;++i){
            ans=s+t;
            s=t;
            t=ans;
        }
        return ans;
    }
};
