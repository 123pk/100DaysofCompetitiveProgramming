/*
Platform :- Leetcode
Problem :- Maximum Value after Insertion
Contest :- Weekly contest 243
*/
class Solution {
public:
    string maxValue(string n, int x) {
        string ans="";
        if(n[0]=='-'){
            ans+='-';
            int index=n.size();
            for(int i=1;i<n.size();++i){
                if(x<(n[i]-'0')){
                    ans+=to_string(x);
                    index=i;
                    break;
                }
                else{
                    ans+=n[i];
                }
            }
            
            if(index==n.size())ans+=to_string(x);
            else{
                for(int i=index;i<n.size();++i){
                    ans+=n[i];
                }
            }
        }
        else{
            int index=n.size();
            for(int i=0;i<n.size();++i){
                if(x>(n[i]-'0')){
                    ans+=to_string(x);
                    index=i;
                    break;
                }
                else ans+=n[i];
            
            }
            
            if(index==n.size())ans+=to_string(x);
            else{
                for(int i=index;i<n.size();++i){
                    ans+=n[i];
                }
            }
        }
        return ans;
    }
};
