/*
Platform :- Leetcode
Problem :- Sign of product of array
Contest :- Weekly contest 236
*/
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int f=0,c=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0){
                f=1;break;
            }
            else{
                if(nums[i]<0)c++;
            }
        }
        
        if(f)return 0;
        if(c%2)return -1;
        return 1;
    }
};
