/*
Platform :- Atcoder
Problem :- B - Permutation check
Contest :- Atcoder Contest 205
Approach :- sort array and if for all i from ( 0 to n-1) A[i] = i+1 then print "Yes" else "No"
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    long long A[n];
    for(int i=0;i<n;++i){
        cin>>A[i];
    }
    
    sort(A,A+n);
    int f=0;
    for(int i=0;i<n;++i){
        if(A[i]!=(i+1)){
            f=1;break;
        }
    }
    if(f)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
