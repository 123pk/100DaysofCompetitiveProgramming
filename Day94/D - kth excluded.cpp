/*
Platform :- Atcoder
Problem :- D - kth excluded
Contest :- Atcoder Beginner contest 205
Approach :- binary in the array till the number of missing value is less than required 'k' for each query .
            Time complexity of program :- O( q*log(n))
*/

#include<bits/stdc++.h>
using namespace std;
long long find(vector<long long>& A, long long k) {
        long long l = 0, r = A.size(), m;
        while (l < r) {
            m = (l + r) / 2;
            if (A[m] - 1 - m < k)
                l = m + 1;
            else
                r = m;
        }
        return l + k;
    }

int main(){
    int n,q;
    cin>>n>>q;
    
    vector<long long> A(n);
    for(int i=0;i<n;++i){
        cin>>A[i];
    }
    
    for(int i=0;i<q;++i){
        long long k;
        cin>>k;
        
        long long ans=find(A,k);
        cout<<ans<<endl;
    }
}
