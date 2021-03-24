/*
Platform :- Leetcode
Problem :- Advantage Shuffle
Event :- March Daily challenge
*/
bool comp(pair<int,int>P,pair<int,int>Q){
    return P.first>Q.first;
}

class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        priority_queue<int>P;
        priority_queue<int,vector<int>,greater<int>>Q;
        for(auto x:A){
            P.push(x);
            Q.push(x);
        }
        
        vector<pair<int,int>>R;
        for(int i=0;i<B.size();++i){
            R.push_back({B[i],i+1});
        }
        
        sort(R.begin(),R.end(),comp);
        
        int n=A.size();
        vector<int>ans(n);
        int i=0;
        while(n--){
            //cout<<P.top()<<" "<<R[i].first<<" "<<R[i].second<<endl;
            if((P.top()<=R[i].first)){
                ans[R[i].second-1]=(Q.top());
               // cout<<" $ ";
                Q.pop();
            }
            else{
                //cout<<" & ";
                ans[R[i].second-1]=(P.top());
                P.pop();
            }
            i++;
        }
        
        return ans;
    }
};
