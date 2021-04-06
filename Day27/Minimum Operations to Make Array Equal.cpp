/*
Platform :- Leetcode
Problem :- Minimum Operations to Make Array Equal
Event :- Leetcode Daily challenge
*/
class Solution {
public:
    int minOperations(int n) {
        if(n%2)
        {
            int x1=n/2;
            int val=(2*x1)+1;
            int c=0;
            for(int i=0;i<x1;++i)
            {   
                int temp=(2*i)+1;
                c+=abs(temp-val);
            }
            return c;
            
        }
        else
        {
            int x1=n/2;
            
            int val=(2*x1);
            int c=0;
            for(int i=0;i<x1;++i)
            {   
                int temp=(2*i)+1;
                c+=abs(temp-val);
            }
            return c;
            
        }
    }
};
