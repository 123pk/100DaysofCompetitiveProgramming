/*
Platform :- Codechef
Problem :- VCOUPLE
Contest :-  SPYBITS IIT BHU
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
    
        int n;
        cin>>n;
        
        long long A[n],B[n];
        for(int i=0;i<n;++i)cin>>A[i];
        for(int i=0;i<n;++i)cin>>B[i];
        
        sort(A,A+n);
        sort(B,B+n,greater<long long>());
        
        long long temp=0;
        for(int i=0;i<n;++i){
            long long z=A[i]+B[i];
            temp=max(temp,z);
        }
        cout<<temp<<endl;
    }
}
