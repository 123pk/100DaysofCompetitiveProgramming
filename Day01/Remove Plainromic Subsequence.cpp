/*
Platform :-Leetcode
Problem :- Remove Palindromic Subsequence
Hint:- the solution lies between 0 and 2
*/

class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0)return 0;
        int f=0;
        for(int i=0;i<(s.size()/2);++i){
            if(s[i]!=s[(s.size()-1)-i]){
                f=1;break;
            }
        }
        
        if(f==0)return 1;
        return 2;
    }
};
