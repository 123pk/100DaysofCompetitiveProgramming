/*
Platform :- Leetcode
Problem :- Power of 3
Event :- April Daily challenge
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        
        while(n>=3){
            if(n%3){
               return false;
            }
            n/=3;
            if(n==1)return true;
        }
        
        if(n==1)return true;
        return false;
    }
};
