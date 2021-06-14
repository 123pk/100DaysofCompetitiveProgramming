/*
Platform :- Leetcode
Problem :- Merge Triplet to form target triplet
Contest :- Weekly contest 245
Approach :- Choose a triplet which have atleast one matching value and other values should not be greater than corresponding values of target
*/

class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int a=target[0],b=target[1],c=target[2];
        vector<int>temp1,temp2,temp3;
        
        //finding triplet with first value of target triplet
        for(int i=0;i<triplets.size();++i){
            if(triplets[i][0]==a){
                if(triplets[i][1]<=b && triplets[i][2]<=c)temp1.push_back(i);
            }
        }
        
        //finding triplet with second value of target triplet
        for(int i=0;i<triplets.size();++i){
            if(triplets[i][1]==b){
                if(triplets[i][0]<=a && triplets[i][2]<=c)temp2.push_back(i);
            }
        }
        
        //finding triplet with third value of target triplet
        for(int i=0;i<triplets.size();++i){
            if(triplets[i][2]==c){
                if(triplets[i][1]<=b && triplets[i][0]<=a)temp3.push_back(i);
            }
        }
        
        if(temp1.size() && temp2.size() && temp3.size())return true;
        return false;
    }
};
