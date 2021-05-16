/*
Platform :- Leetcode
Problem :- Finding pairs with certain sum
Contest :-  Weekly contest 241
Hint :- store data in two vectors. we need to find pair with ( x + y ) = k here x and y are elements from each vector we can simplify and check for occurence of (x) and (k-y)
        using map
*/
class FindSumPairs {
public:
    map<int,int>P;
    vector<int>temp1,temp2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        temp1=nums1;
        temp2=nums2;
        for(auto x:nums2)P[x]++;
    }
    
    void add(int index, int val) {
        P[temp2[index]]--;
        temp2[index]+=val;
        P[temp2[index]]++;
    }
    
    int count(int tot) {
        int ans=0;
        for(auto x:temp1){
            if(x<tot){
                int temp=tot-x;
                ans+=P[temp];
            }
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
