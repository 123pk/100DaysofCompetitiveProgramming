/*
Platfrom :- Leetcode
Contest :- Biweekly contest 50
Problem :- Queries on Number of points inside circle
*/
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>&A, vector<vector<int>>& B) {
        
        vector<int>ans;
        
        for(int i=0;i<B.size();++i){
            int d=0;
            for(int j=0;j<A.size();++j){
                double temp=A[j][0];
                double temp2=A[j][1];
                double temp3=B[i][2];
                double d1=B[i][0];
                double d2=B[i][1];
                double z=abs(d1-temp);
                z*=z;
                double z2=abs(d2-temp2);
                z2*=z2;
                
                double fin=sqrt(z+z2);
                if(fin<=temp3)d++;
            }
            ans.push_back(d);
        }
        
        return ans;
        
    }
};
