/*
Pltform :- Leetcode
Problem :- Check If a String Contains All Binary Codes of Size K
Approach :- As the value of K is small we can find all the different substrings of length K that can be generated and add it in set and if size
        of ( size of set is == 2^K ) then return true else false
*/

 

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> sub_string;
   
    for (int i = 0; i + k <= s.size(); i++) 
    {
        sub_string.insert(s.substr(i, k));
    }
    return sub_string.size() == 1 << k;
    }
};
