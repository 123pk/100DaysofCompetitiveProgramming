/*
Platform :- Codeforces
Contest :- Bi weekly contest 53
Problem :- Substring of size three with Distinct characters
*/
class Solution {
public:
    int countGoodSubstrings(string s) {
        set<char>P;
        int ans=0;
        if(s.length()<3)return ans;
        int f=0;
        for(int i=2;i<s.size();++i){
            set<char>P;
            P.insert(s[i]);
            P.insert(s[i-1]);
            P.insert(s[i-2]);
            if(P.size()==3)ans++;
        }
        return ans;
    }
};
