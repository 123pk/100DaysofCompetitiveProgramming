/*
Platform :- Leetcode
Problem :- Redistribute characters to make all string equal
Contest :- Weekly contest 245
Approach :-  if there are 'm' disctinct chanracters then each character must ocuur multiple of 'm' times
*/

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        map<char,int>P;
        for(auto x:words){
            for(auto y:x)P[y]++;
        }
        
        int start=0;int m=words.size();
        for(auto x:P){
             if(x.second%m)return false;
        }
        return true;
    }
};
