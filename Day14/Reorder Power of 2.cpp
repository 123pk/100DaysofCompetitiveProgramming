/*
Platform :- Leetcode
Problem :- Reorder Power of 2
Event :- March Daily challenge
*/
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string s=to_string(n);
        int f=0;
        sort(s.begin(),s.end());
        do{
            if(s[0]!='0'){
           int m=stoi(s);
           string z=bitset<64>(m).to_string();
            if(count(z.begin(),z.end(),'1')==1){
                f=1;break;
            }
            }
        }while(next_permutation(s.begin(),s.end()));
        return f;
    }
};
