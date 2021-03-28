/*
Platform :- Leetcode
Problem :- Minimum number of operations to reinitialize permutaion
Contest :- Leetcode Weekly contest 234
*/
class Solution {
public:
    int reinitializePermutation(int n) {
        int ans=0;
        vector<int>P(n);
        for(int i=0;i<n;++i){
            P[i]=i;
        }
        vector<int>temp=P;
        vector<int>arr(n);
        while(1){
            
            
            for(int i=0;i<n;++i){
                if(i%2==0){
                    arr[i]=(temp[i/2]);
                }
                else{
                    arr[i]=(temp[(n/2)+(i-1)/2]);
                }
            }
             
            ans++;
            
            if(arr==P){
                break;
            }
            temp=arr;
        }
        
        return ans;
    }
};
