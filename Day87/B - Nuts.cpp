/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 204
Problem :- B - Nuts
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    long long ans=0;
    long long A[n];
    for(int i=0;i<n;++i){
        cin>>A[i];
        if(A[i]>10)ans+=(A[i]-10);
    }
    cout<<ans<<endl;
}
