/*
Platform :- Leetcode
Problem :- Longer Contiguous Segment of Ones than zero
Contest :- Weekly contest 242
Hint:- bruteforce,easy
*/

class Solution {
public:
    bool checkZeroOnes(string s) {
      
      // k is max number of 1's in contiguous segment 
      // l is max number of 0's in contigous segment
        int c=0,d=0,k=0,l=0;
      
        if(s[0]=='1')c++;
        else d++;
  
        k=max(c,k);
        l=max(d,l);
        for(int i=1;i<s.size();++i){
             if(s[i]==s[i-1]){
                 if(s[i]=='1')
                 {
                     c++;
                     if(i==s.size()-1)k=max(k,c);
                     
                 }
                 else{
                    d++; 
                     if(i==s.size()-1)l=max(l,d);
                 } 
                 
             }
            else{
                if(s[i]=='0'){
                    k=max(k,c);
                    c=0;
                    d=1;
                    l=max(l,d);
                }
                else{
                    l=max(l,d);
                    d=0;
                    c=1;
                    k=max(k,c);
                }
            }
        }
        
        
        return k>l;
    }
};
