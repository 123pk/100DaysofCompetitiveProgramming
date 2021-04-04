/*
Platform :- Leetcode
Problem :- Finding the user actve time
Contest :- Weekly contest 235
*/
class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,int>Q;
        map<int,set<int>>P;
        for(auto x:logs){
            P[x[0]].insert(x[1]);
        }
        
        vector<int>ans(k);
        for(auto x:P){
            Q[x.second.size()-1]++;
        }
        
        for(int i=0;i<k;++i){
            ans[i]=Q[i];
        }
        return ans;
    }
};
