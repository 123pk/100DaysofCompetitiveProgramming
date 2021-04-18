/*
Platform :- Leetcode
Contest :- Weekly contest 237
Problem :- Find Xor sum of all bitwise AND
*/
class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        vector<int>P(32,0);
        for(int i=0;i<arr2.size();++i){
            string temp=bitset<32>(arr2[i]).to_string();
            reverse(temp.begin(),temp.end());
            for(int j=0;j<32;++j){
                if(temp[j]=='1')P[j]++;
            }
        }
        
        int ans=0;
        for(int i=0;i<arr1.size();++i){
            string temp=bitset<32>(arr1[i]).to_string();
            reverse(temp.begin(),temp.end());
            for(int j=0;j<32;++j){
                if(temp[j]=='1'){
                    if(P[j]){
                        int temp=pow(2,j);
                       if(P[j]%2)ans=ans xor temp;
                    }
                }
            }
        }
        
        return ans;
    }
};
