/*
Platform :- Leetcode
Contest :- weekly contest 232
Problem :- Fint center of star graph
Approach :- the occurence of star would be more than any other node in graph , we will use hasmap to count frequency of each node and 
            node with maximum frequency is our center
*/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>P;
        for(auto x:edges){
            P[x[0]]++;
            P[x[1]]++;
        }
        
        int mx=0;
        int ans=0;
        for(auto x:P){
            if(x.second>mx){
                mx=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};
