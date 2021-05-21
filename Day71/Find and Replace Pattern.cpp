/*
Platform :- Leetcode
Problem :- Find and Replace Pattern
Approach :- i. filter string of same length in words .
            ii. store the index of occurence of character in pattern string 
                ex:- "apple"  be the string then we will be
                      storing "a" - [1] , "p" - [2,3] , "l" - [4] ,"e" - [5]
                      
            iii. we will find the same for filtered strings .
            iv. then we will itterate from 0 to len-1 and check if the character in pattern string and words string has same vector containing index of occurence
*/


                              
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
       
        //storing index of occurence of that character in pattern string 
        map<char,vector<int>>P;
       
        for(int i=0;i<pattern.size();++i){
            P[pattern[i]].push_back(i+1);
            //Q.insert(pattern[i]);
        }
        
        
        for(int i=0;i<words.size();++i){
            
            if(words[i].size() != pattern.size())continue;
            
            // storing index of occurence of that character in words[i] string 
            map<char,vector<int>>R;
            for(int j=0;j<words[i].size();++j){
                R[words[i][j]].push_back(j+1);
            }
            
            int f=0;
             //comparing if the character at index j occur at same places in both the string or not
            for(int j=0;j<pattern.size();++j){
                if(P[pattern[j]]!=R[words[i][j]]){
                    f=1;break;
                }
            }
            
             // if it satisfies the condition then adding it to our answer
            if(f==0)ans.push_back(words[i]);
        }
        
        return ans;
    }
};
