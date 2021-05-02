/*
Platform :- Leetcode
Problem :- Minimum Distance to the Target Element 
Contest :- Weekly contest 239
*/

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==target){
                int temp=abs(start-i);
                ans=min(ans,temp);
            }
        }
        return ans;
    }
};
