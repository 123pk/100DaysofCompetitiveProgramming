/*
Platform :- Leetcode
Problem :- Minimum number of swaps to make binary string altering
Contest :- Weekly contest 241
Hint :- Try to make either odd position will all 1's or even position with all 0's with minimum cost
*/
class Solution {
public:
    int minSwaps(string s) {
        
        int x=count(s.begin(),s.end(),'1');
        int z=s.size()-x;
        if(abs(x-z)>1)return -1;
        
        if(abs(x-z)==1){
            int f=0;
            int e0=0,o0=0,o1=0,e1=0;
            for(int i=0;i<s.size();++i){
                if(i%2){
                    if(s[i]=='1')e1++;
                    else o1++;
                }
                else{
                    if(s[i]=='1'){
                        o0++;
                    }else e0++;
                }
            }
            
             
            int ans=INT_MAX;
            if(x>(z)){
                ans=e1;
            }
            else{
                ans=o1;
            }
             
            return ans;
        }
        
        int c=0,d=0,c1=0,d1=0;
        int n = s.length();
        for (int i = 0; i <n; i++) {
            if (i%2 == 0) { 
                if (s[i] == '1') d++;
                else c++;
            }
            else { 
                if (s[i] == '1') c1++;
                else d1++;
            }
        }
        
        int ans=min(d,c1);
        ans=min(ans,min(c,d1));
        return ans;
        
    }
};
