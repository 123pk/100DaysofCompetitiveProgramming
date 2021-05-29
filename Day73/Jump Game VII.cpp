/*
Platform :- Leetcode
Problem :- Jump Game VII
Contest :- Weekly contest 242
Hint :- if index containing '0' is range of i+minJump to i+maxJump then we can rech upto there where s[i]='0'
*/
class Solution {
public:
    bool canReach(string s, int mi, int ma) {
        if(s.back()=='1')return false; 
        // In case the last character is '1', we'll never be able to reach the end.
        vector<bool>dp(s.size());
        dp[0] = true;
        int count = 0;
        for(int i = 1; i<s.size(); i++){
            if(i>ma){
                count-=dp[i-ma-1]; //Moving sliding window forward by decrementing the count by the dp value of the index that is no longer in our window
            }
            if(i>=mi){
                count+=dp[i-mi];
            }
            if(count>0&&s[i]=='0')dp[i] = true;
            else dp[i] = false;
        }
        return dp.back();
    }
};
