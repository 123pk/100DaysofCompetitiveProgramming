/*
Platform :- Leetcode
Problem :- Maximum Ascending Subarray
Contest :- Weekly contest 233
*/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans=nums[0];
        int tot=nums[0];
        for(int i=1;i<nums.size();++i){
            if(nums[i]<=nums[i-1]){
                tot=nums[i];
            }
            else{
                tot+=nums[i];
            }
            ans=max(ans,tot);
        }
        return ans;
    }
};
