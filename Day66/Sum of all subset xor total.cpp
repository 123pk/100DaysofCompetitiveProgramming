/*
Platform :- Leetcode
Problem :- Sum of all subset xor total
Contest :- Weekly contest 241
*/
class Solution {
public:
  
  
    int subsetXORSum(vector<int>& arr) {
        int bits = 0;
        int n=arr.size();
    // Finding bitwise OR of all elements
     for (int i=0; i < n; ++i)
         bits |= arr[i];
 
      int ans = bits * pow(2, n-1);
 
      return ans;
    }
};
