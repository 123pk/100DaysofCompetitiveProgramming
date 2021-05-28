/*
Platform :- Leetcode
Problem :- Maximum Product of Word Lengths
Hint :- there are 26 alphabet in english so we can replace each string with "vector" of 26 size which will store details about occurence of character.
        Compare each pair of index with their vectors 
        Run time is O(N^2* 26).
*/

bool comp(string P,string Q){
    return P.size()>Q.size();
}
class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        sort(words.begin(),words.end(),comp);
        
        int n=words.size();
        int ans=0;
        
        vector<pair<vector<int>,int>>Q;
        for(int i=0;i<words.size();++i){
            
            //maintain an array that stores which character is present in that word as there are only
            // 26 letters in alphabet
            vector<int>temp(26,0);
            for(int j=0;j<words[i].size();++j){
                 temp[words[i][j]-'a']++;
             }
            int m=words[i].size();
            Q.push_back({temp,m});
     
        }
        
        //compare each pair of index with corresponding vector
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                int f=0;
                for(int k=0;k<26;++k){
                    if(Q[i].first[k] && Q[j].first[k]){
                        f=1;break;
                    }
                }
                if(f==0){
                    ans=max(ans,Q[i].second*Q[j].second);
                    break;
                }
            }
        }
        
        return ans;
    }
};
