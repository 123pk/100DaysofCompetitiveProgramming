/*
Platform :- Leetcode
Problem :- Minimum absolute sum difference
Contest :- Weekly contest 235
*/
pair<int,int> binsearch(vector<int>& A,int val){
    pair<int,int>ans;
    int start=0,end=A.size()-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(A[mid]==val){
            ans={val,val};
            break;
        }
        else{
            if(end-start<=1){
                if(A[start]<A[mid] && A[mid]<A[end]){
                    ans={A[start],A[end]};
                    break;
                }
                else{
                    ans={A[start],A[end]};
                    break;
                }
            }
            else{
                if(A[mid]<val){
                    start=mid;
                    mid=(start+end)/2;
                }
                else{
                    end=mid;
                    mid=(start+end)/2;
                }
            }
        }
    }
    
    return ans;
}

class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        int mod=1e9+7;
        for(auto x:nums1)temp.push_back(x);
        
        sort(temp.begin(),temp.end());
        
        int tot=0;
        
        for(int i=0;i<nums1.size();++i){
            tot=(tot+(abs(nums1[i]-nums2[i]))%mod)%mod;
        }
        cout<<" check "<<tot<<endl;
        vector<pair<int,int>>Q;
        for(int i=0;i<nums1.size();++i){
            pair<int,int>z=binsearch(temp,nums2[i]);
            
              
            
            int d=abs(nums1[i]-nums2[i]);
           // cout<<nums2[i]<<" "<<d<<endl;
            int d2=abs(z.first-nums2[i]);
            //cout<<z.first<<" "<<d2<<endl;
            int d3=abs(z.second-nums2[i]);
            //cout<<z.second<<" "<<d3<<endl;
            Q.push_back({min(d2,d3),d});
        }
        
        
        int ans=INT_MAX;
        for(int i=0;i<Q.size();++i){
            //cout<<Q[i].first<<' '<<Q[i].second<<" "<<tot<<endl;
            ans=min(ans,min((tot+Q[i].first-Q[i].second)%mod,tot));
        }
        
        return ans;
    }
};
