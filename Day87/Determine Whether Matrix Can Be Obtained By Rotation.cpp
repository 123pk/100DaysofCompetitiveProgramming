/*
Platform :- Leetcode
Problem :- Determine Whether Matrix Can Be Obtained By Rotation
Contest :- Weekly contest 244
*/
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
       
        int n=mat.size();
        if(mat==target)return true;
        
        for(int k=0;k<3;++k){
            
         vector<vector<int>>temp;
            
         for(int j=0;j<n;++j){
             vector<int>z;
             for(int i=0;i<n;++i){
                 z.push_back(mat[i][j]);
             }
             reverse(z.begin(),z.end());
             temp.push_back(z);
         }
            
            if(temp==target)return true;
            mat=temp;
        }
        
        return false;
    }
};
