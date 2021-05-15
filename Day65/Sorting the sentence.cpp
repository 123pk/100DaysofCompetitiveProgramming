/*
Platform :- Leetcode
Problem :- Sorting the sentence
*/
bool comp(pair<string,int>P,pair<string,int>Q){
    return P.second<Q.second;
}

class Solution {
public:
    string sortSentence(string s) {
        s+=' ';
        int temp=0;
        string ans="";
        
        string z="";
        vector<pair<string,int>>P;
        for(auto x:s){
            if(x==' '){
                P.push_back({z,temp});
                temp=0;
                z="";
            }
            else{
                if('0'<=x && x<='9'){
                    temp*=10;
                    temp+=(x-'0');
                }
                else{
                    z+=x;
                }
            }
        }
        
        
        sort(P.begin(),P.end(),comp);
        
        for(int i=0;i<P.size();++i){
            ans+=P[i].first;
            if(i==P.size()-1){
               continue; 
            }
            else ans+=' ';
            
        }
        
        return ans;
    }
};
