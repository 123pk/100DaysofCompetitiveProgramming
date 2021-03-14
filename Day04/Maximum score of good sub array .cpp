/*
Platform :- Leetcode
Problem :- Maximum score of good subarray
Contest :- Weekly contest 232
Hint :- Use two pointer and try to find count of minimum in range from (k,0) and (k,arr.size()-1) use greedy approach to find the max value
*/

bool comp(pair<int,int>P,pair<int,int>Q){
    return P.first>Q.first;
}

class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        map<int,int>P;
        
        
        int mn=0;
        for(int i=k;i>=0;--i){
            if(i==k)mn=nums[i];
            mn=min(mn,nums[i]);
            P[mn]++;
        }
         
        for(int i=k;i<nums.size();++i){
            if(i==(k)){
              mn=nums[i];
              continue;
            }
            mn=min(mn,nums[i]);
            P[mn]++;
        }
        
        vector<pair<int,int>>ans;
        for(auto x:P){
            ans.push_back({x.first,x.second});
        }
        
        sort(ans.begin(),ans.end(),comp);
        
        int tot=0;
        int d=0;
        int mx=0;
        for(int i=0;i<ans.size();++i){
            d+=ans[i].second;
            tot=ans[i].first*d;
            mx=max(mx,tot);
           
        }
         
         
        
        return mx;
    }
};
