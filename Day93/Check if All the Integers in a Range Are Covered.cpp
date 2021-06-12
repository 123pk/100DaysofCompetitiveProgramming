/*
Platform :- Leetcode
Problem :- Check if All the Integers in a Range Are Covered
Contest :- Bi weekly contest 54
*/
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int>P(51);
        for(int i=0;i<ranges.size();++i){
            for(int j=ranges[i][0];j<=ranges[i][1];++j){
                P[j]=1;
            }
        }
        
        for(int i=left;i<=right;++i){
            if(P[i]==0)return false;
        }
        return true;
    }
};
