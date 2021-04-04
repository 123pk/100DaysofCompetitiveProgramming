/*
Platform :- Leetcode
Problem :- Truncate sentence
Contest :- Weekly contest 235
*/
class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        s+=' ';
        vector<string>P;
        string temp;
        for(int i=0;i<s.size();++i){
            if(s[i]==' '){
                if(k){
                ans+=temp;
                    if(k>1){
                       ans+=' '; 
                    }
                k--;
                temp="";
                }
                else break;
            }
            else{
                temp+=s[i];
            }
        }
        return ans;
    }
};
