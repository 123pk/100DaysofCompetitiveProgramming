/*
Platform :- Leetcode
Problem :- Find Duplicate File in System
Approach :- we will try to find frequency of of contents of each  file using "map" in c++ , then if the frequency if greater than equal to 2 
            we will add the address to our answer
*/

class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
       
        vector< vector <string> > ans;
        map< string , vector<string> > P;
        
        for(auto x:paths){
            //start stores the starting index of each file 
            // temp is used to store the 
            string temp="",start="";
            string val="";
            int g=0,k=0;
            for(int i=0;i<x.size();++i){
                if(k){
                if(g){
                    if(x[i]==')'){
                        g=0;
                        P[temp].push_back(val);
                        val=start;
                        temp="";
                    }
                    else temp+= x[i];
                }
                else{
                    if(x[i]=='(') g = 1;
                    else{
                        if(x[i]==' ') continue;
                        val+= x[i];
                    }
                } }
                else{
                    if(x[i]==' '){
                        start+='/', k = 1;
                        val = start;
                    }
                    else start+= x[i];
                } }
        }
        
        for(auto x:P){
            if(x.second.size()>1) ans.push_back( x.second ) ;
        }
        return ans;
    }
};
