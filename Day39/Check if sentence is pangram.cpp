/*
Platform :- Leetcode
Problem :- Check if sentence is Pangram
Contest :- Weekly contest 237
*/
class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int>P;
        if((sentence.size()<26))return false;
        
        for(auto x:sentence)P[x]++;
        for(char ch='a';ch<='z';++ch){
            if(P[ch]==0)return false;
        }
        return true;
    }
};
