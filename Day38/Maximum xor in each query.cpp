/*
Platfrom :- Leetcode
Contest :- Biweekly contest 50
Problem :- Maximum xor in each query
*/
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int m) {
        int ans=0;
        for(auto x:nums)ans=ans xor x; 
        int temp2=pow(2,m);
        temp2-=1;
        vector<int>sol;
        for(int i=0;i<nums.size();++i){
            sol.push_back(ans xor temp2);
            ans=ans xor nums[nums.size()-1-i];
        }
        return sol;
    }
};
