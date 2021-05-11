/*
Platform :- Leetcode
Problem :- Maximum points You can Obtain from cards
*/
class Solution {
public:
    int maxScore(vector<int>& A, int k) {
        int n=A.size();
        int pref[n],suff[n];
        int tot=0;
        for(int i=0;i<n;++i){
            tot+=A[i];
            pref[i]=tot;
        }
        
        tot=0;
        int j=0;
        for(int i=n-1;i>=0;--i){
            tot+=A[i];
            suff[j]=tot;
            j++;
        }
        
        int ans=max(pref[k-1],suff[k-1]);
        int temp=0;
        for(int i=0;i<k-1;++i){
            temp=pref[i]+suff[k-1-(i+1)];
            ans=max(ans,temp);
        }
        
        
        return ans;
    }
};
