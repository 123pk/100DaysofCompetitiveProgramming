/*
Platform :- codedrills
Contest :- AMRITA ICPC Practise Session 5
Problem :- Colorful Holi
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,x,y,k;
        cin>>n>>x>>y>>k;
        
        long long A[n];
        set<long long>B,C;
        
        for(int i=0;i<n;++i){
            cin>>A[i];
            if((x<=A[i]) &&(A[i]<=y)){
            B.insert(A[i]);
            }
            C.insert(A[i]);
        }
        
        int m=B.size();
        int z=(y-x)+1;
        z-=m;
        
        if(z==0 || (C.size()==n)){
            cout<<(C.size())<<endl;
        }
        else{
            int x=n-C.size();
            int zz=C.size();
            zz+=min(x,min(z,k));
            cout<<zz<<endl;
        }
        
    }
}
