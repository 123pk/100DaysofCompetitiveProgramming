/*
Platform :- Leetcode
Problem :- Reduction Operations to Make the Array Elements Equal
Contest :- Weekly contest 244
*/
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
         
        map<int,int>P;
        for(auto x: nums)P[x]++;
        
        vector<int>temp;
        for(auto x:P)temp.push_back(x.first);
        
        sort(temp.begin(),temp.end(),greater<int>());
        int ans=0;
        for(int i=0;i<temp.size()-1;++i){
            P[temp[i]]+=ans;
            ans=P[temp[i]];
        }
        ans=0;
        for(int i=0;i<temp.size()-1;++i)ans+=P[temp[i]];
        return ans;
    }
};
