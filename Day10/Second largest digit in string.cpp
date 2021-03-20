/*
Platform :- Leetcode
Problem :- Second Largest digit in string
Contest :- Biweekly contest 48
*/

class Solution {
public:
    int secondHighest(string s) {
        string temp;
        set<char>P;
        for(int i=0;i<s.size();++i){
            if(('0'<=s[i])&&(s[i]<='9')){
                if(P.find(s[i])==P.end())temp+=s[i];
                P.insert(s[i]);
            }
        }
        sort(temp.begin(),temp.end());
         
        if(temp.size()<=1)return -1;
        return temp[temp.size()-2]-'0';
    }
};
