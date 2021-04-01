/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 234
Problem :- Number of different Integer in string
*/
class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string>P;
        string temp,z;
        int f=0;
        for(auto x:word){
            if(f){
                if('0'<=x && x<='9'){
                    temp+=x;
                }
                else{
                    if(temp.size()>1){
                        
                    }
                    P.insert(temp);
                    temp="";
                    f=0;
                }
            }
            else{
                if(x=='0'){
                    z="";
                    z+=x;
                    
                }
                else{
                    if('1'<=x && x<='9'){
                        temp=x;
                        z="";
                        f=1;
                    }
                    else{
                        if(z.size()==1){
                            P.insert(z);
                            z="";
                        }
                    }
                }
            }
        }
        if(temp.size()){
            P.insert(temp);
        }
        if(z.size()){
            P.insert(z);
        }
        return P.size();
    }
};
