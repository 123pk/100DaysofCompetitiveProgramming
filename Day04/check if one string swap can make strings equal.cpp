/*
Platform :- Leetcode
Problem :- check if one string swap can make strings equal
Contest :- Leetcode contest 232
Approach:- Number of swap is one so either 2 or 0 index should have different elemnts and on sorting both strings are equal
*/

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c=0;
        for(int i=0;i<s1.size();++i){
            if(s1[i]!=s2[i])c++; 
        }
        
        if(c>2)return false;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        return s1==s2;
    }
};


