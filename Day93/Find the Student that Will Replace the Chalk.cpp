/* 
Platform :- Leetcode 
Problem :- Find the Student that Will Replace the Chalk 
Contest :- Bi weekly contest 54
Approach :- find total sum of time need for all students , then find the remainder ( k % tot) , then start traversing from left the index at which the  k< chalk[i]
            reuturn that index
*/
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long tot=0;
        for(auto x:chalk)tot+=x;
        
        long long temp=k%tot;
        //int index;
        for(int i=0;i<chalk.size();++i){
            if(temp<chalk[i]){
                return i;
            }
            temp-=chalk[i];
        }
        return chalk.size()-1;
    }
};
