/*
Platform :- Leetcode
Problem :- Running Sum of 1D Array
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>P;
        int sum=0;
        for(int i=0;i<nums.size();++i)
        {
            sum+=nums[i];
            P.push_back(sum);
        }
        return P;
    }
    
};
