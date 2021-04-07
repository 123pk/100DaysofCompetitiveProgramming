/*
Platform :- Leetcode
Problem:- Determine if string are alike
Enent :- April Daily challenge
*/
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        
        int c=0;
        for(int i=0;i<(n/2);++i){
            if((s[i]=='a' ||s[i]=='A') || s[i]=='e'||s[i]=='E'||s[i]=='O' || s[i]=='o' || s[i]=='u' || s[i]=='U' || s[i]=='i' || s[i]=='I'){
                c++;
            }
        }
        
        int d=0;
        for(int i=n/2;i<n;++i){
            if((s[i]=='a' ||s[i]=='A') || s[i]=='e'||s[i]=='E'||s[i]=='O' || s[i]=='o' || s[i]=='u' || s[i]=='U' || s[i]=='i' || s[i]=='I'){
                d++;
            }
        }
        
        return c==d;
    }
};
