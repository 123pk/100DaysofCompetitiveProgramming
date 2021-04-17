/*
Platform :- Leetcode
Problem :- Minimum Operation to make the array increasing
Contest :- Biweekly contest 50
*/
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size();++i){
            if(nums[i]>nums[i-1])continue;
            int temp=nums[i-1]-nums[i];
            temp++;
            ans+=temp;
            nums[i]+=temp;
        }
        return ans;
    }
};
