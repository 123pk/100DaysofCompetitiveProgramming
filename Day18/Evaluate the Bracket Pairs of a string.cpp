/*
Platform :- Leetcode
Problem :- Evaluate the Bracket Pairs of a string 
Contest :- Leetcode Weekly contest 234
*/
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans;
        string temp="";
        
        map<string,string>P;
        set<string>Q;
        for(auto x:knowledge){
            P[x[0]]=x[1];
            Q.insert(x[0]);
        }
        
        int f=0;
        for(int i=0;i<s.size();++i){
            if(f){
                if(s[i]==')'){
                    if(temp.size()){
                       if(Q.find(temp)==Q.end()){
                           ans+="?";
                       } 
                        else{
                            ans+=P[temp];
                            temp="";
                        }
                    }
                     f=0;
                    temp="";
                }
                else{
                    temp+=s[i];
                }
            }
            else{
                if(s[i]=='('){
                    f=1;
                }
                else{
                    ans+=s[i];
                }
            }
        }
        
        return ans;
            
    }
};
