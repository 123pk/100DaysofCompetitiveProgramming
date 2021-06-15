/*
Platform :- Leetcode
Problem :- Maximum unit on trucks
Approach :- sort box types by decreasing order of number of units per boxes greedily 
*/
bool comp(vector<int>P,vector<int>Q){
        return (P[1]) > (Q[1]);
    }
class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& a, int b) {
      
        sort(a.begin(),a.end(),comp);
        int tot=0;
        for(int i=0;i<a.size();++i){
            tot+=min(b,a[i][0])*a[i][1];
            b-=min(b,a[i][0]);
            if(b==0)break;
        }
        return tot;
    }
};
