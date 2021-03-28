/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 234
Problem :- Number of different Integer in string
*/
class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string>P;
        string temp;
        for(auto x:word){
            if('0'<=x && x<='9'){
                  
                    temp+=x;
            }
            else{
                if(temp.size()){
                    if(temp.size()==1){
                        P.insert(temp);
                    }
                    else{
                        string z;
                     int f=0;
                     for(int j=0;j<temp.size();++j){
                         if(f){
                             z+=temp[j];
                         }
                         else{
                             if(temp[j]=='0')continue;
                             else{
                                 z+=temp[j];
                                 f=1;
                             }
                         }
                     }
                     temp=z;
                        P.insert(temp);
                    }
                    
                    temp="";
                }
            }
        }
        
        if(temp.size()==1)P.insert(temp);
        else if(temp.size()>1){
            string z;
                     int f=0;
                     for(int j=0;j<temp.size();++j){
                         if(f){
                             z+=temp[j];
                         }
                         else{
                             if(temp[j]=='0')continue;
                             else{
                                 z+=temp[j];
                                 f=1;
                             }
                         }
                     }
                     temp=z;
                        P.insert(temp);
        }
        return P.size();
    }
};
