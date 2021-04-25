/*
Platform :- Leetcode
Contest :- Weekly contest 238
Problem :- Sum of Digit in Base K
*/
class Solution {
public:
    int sumBase(int n, int k) {
        int ans=0;
        
        while(n){
            ans+=(n%k);
            n=n/k;
        }
        
        return ans;
    }
};
