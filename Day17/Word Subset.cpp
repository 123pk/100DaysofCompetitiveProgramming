/*
Platform :- Leetcode
Problem :- Word Subset 
Hint :- Pre compute the frequency per character of B ( total characters are  26)
*/

class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<string>ans;
        
         map<string,vector<int>>P,Q;
        for(int i=0;i<A.size();++i){
            vector<int>Z(26);
            for(int k=0;k<A[i].size();++k){
                Z[A[i][k]-'a']++;
                 //cout<<(A[i][k]-'a')<<" ";
            }
            //cout<<endl;
            P[A[i]]=Z;
        }
        
        vector<int>fi(26);
        for(int i=0;i<B.size();++i){
            vector<int>Z(26);
            for(int k=0;k<B[i].size();++k){
                Z[B[i][k]-'a']++;
            }
            for(int j=0;j<26;++j){
                fi[j]=max(fi[j],Z[j]);
            }
            
        }
        vector<int>z;
        for(int i=0;i<A.size();++i){
            int f=0;
            z=P[A[i]];
            for(int j=0;j<26;++j){
                if(z[j]<fi[j]){
                    f=1;break;
                }
            }
            if(f==0)ans.push_back(A[i]);
        }
        
        return ans;
    }
};
