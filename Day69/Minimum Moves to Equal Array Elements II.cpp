/*
Platform :- Leetcode
Problem :- Minimum Moves to Equal Array Elements II
Approach :-  we will choose the middle element of sorted array nums if (nums.size() is odd)
             else we will choose the middle value of (nums.size()/2) & (nums.size()/2)-1
*/

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0;
        
        // we will choose the middle element of sorted array nums if (nums.size() is odd)
        // else we will choose the middle value of (nums.size()/2) & (nums.size()/2)-1
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
         
        int temp=0,part_val=0;
        
        if(n%2==0){
            part_val=((nums[n/2]+nums[(n/2)-1]))/2;
        }
        else part_val=nums[(n/2)];
        for(auto x:nums){
            ans+=abs(x-part_val);
        }
        
        return ans;
    }
};
