/*
Platform :- Leetcode
Problem :- Minimise Maximum pair sum in array
Contest :- Bi weekly contest 53
*/
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()/2;i++){
            ans=max(ans,nums[i]+nums[nums.size()-1-i]);
        }
        
        return ans;
    }
};
