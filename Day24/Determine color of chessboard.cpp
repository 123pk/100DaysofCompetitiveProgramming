/*
Platform :- Leetcode
Problem :- Determine Color of Chessboard
Contest :- Biweekly contest 49
*/
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        map<char,int>P;
        for(char ch='a';ch<='h';++ch){
            P[ch]=(ch-'a')+1;
        }
        
        int temp=P[coordinates[0]]+coordinates[1]-'0';
        return temp%2;
    }
};
