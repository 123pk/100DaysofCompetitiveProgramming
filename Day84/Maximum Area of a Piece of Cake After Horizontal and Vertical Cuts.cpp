/*
Platform :- Leetcode
Problem :- Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
Approach :- (max_area = max_height * max_wdth )  sort both arrays and find the maximum difference between two cosecutive numbers that will give us value
            of max_height and max_width . Take care of starting and ending value ( 0,r) and (0,c) where r and c are upper limit of height and width
*/

class Solution {
public:
    int maxArea(int r, int c, vector<int>& h, vector<int>& v) {
        h.push_back(0);
        h.push_back(r);
        v.push_back(0);
        v.push_back(c);
        
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        
        //finding max height 
        long long mh=0;
        for(int i=1;i<h.size();++i){
            long long z=h[i]-h[i-1];
            mh=max(mh,z);
        }
        
        //finding max width
        long long mw=0;
        for(int i=1;i<v.size();++i){
            long long z2=v[i]-v[i-1];
            mw=max(mw,z2);
        }
        long long mod=1e9+7;
        int ans=((mw%mod)*(mh%mod))%mod;
        return ans;
    }
};
