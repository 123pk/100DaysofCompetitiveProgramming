/*
Platform :- Leetcode
Contest :- Bi weekly contest 52
Problem :- Incremental Memory Leak
*/
class Solution {
public:
    vector<int> memLeak(int a, int b) {
        vector<int>ans;
        
        int temp=1;
        int f=0;
        while(1){
            if(a>=b){
                if(temp>a)break;
                a-=temp;
            }
            else{
                if(temp>b)break;
                b-=temp;
            }
            temp++;
            f++;
        }
        
        ans={f+1,a,b};
        return ans;
    }
};
