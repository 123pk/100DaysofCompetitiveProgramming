/*
Platform :- Leetcode
Contest :- Weekly contest 239
Problem :- Minimum Adjacent Swaps to Reach the Kth Smallest Number
*/

int pk2(string s1, string s2, int size)
{
    int i = 0, j = 0;
    int result = 0;
  
    // Iterate over the first string and convert
    // every element equal to the second string
    while (i < size) {
        j = i;
  
        // Find index element of first string which
        // is equal to the ith element of second string
        while (s1[j] != s2[i]) {
            j += 1;
        }
  
        // Swap adjacent elements in first string so
        // that element at ith position becomes equal
        while (i < j) {
  
            // Swap elements using temporary variable
            char temp = s1[j];
            s1[j] = s1[j - 1];
            s1[j - 1] = temp;
            j -= 1;
            result += 1;
        }
        i += 1;
    }
    return result;
}
 
string pk(string num, int k)
{  
    //string ans;
    for(int i=0;i<k;++i)next_permutation(num.begin(),num.end());
    return num;
}

class Solution {
public:
    int getMinSwaps(string num, int k) {
        string s=pk(num,k);
        cout<<s<<" ";
        int n=s.size();
        return pk2(num,s,n);
    }
};
