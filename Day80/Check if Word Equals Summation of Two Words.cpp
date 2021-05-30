/*
Platform :- Leetcode
Problem :- Check if Word Equals Summation of Two Words
Contest :- Weekly contest 243
*/
class Solution {
public:
    bool isSumEqual(string A, string B, string C) {
        long long temp1=0,temp2=0,temp3=0;
        
        for(auto x:A){
            temp1*=10;
            temp1+=(x-'a');
        }
        for(auto x:B){
            temp2*=10;
            temp2+=(x-'a');
        }
        for(auto x:C){
            temp3*=10;
            temp3+=(x-'a');
        }
        
        temp1+=temp2;
        return temp1==temp3;
    }
};
