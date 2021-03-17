/*
Platform :- Codeforces
Problem :- A - Meximization
Contest :- Codeforces Round 708 Div 2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        int n;
        cin>>n;
        
        long long A[n];
        set<long long>P;
        map<long long,int>Q;
        for(int i=0;i<n;++i){
           cin>>A[i];   
           Q[A[i]]++;
           P.insert(A[i]);
        }
        vector<long long>B;
        for(auto x:P)B.push_back(x);
        int m=B.size();
        int i=0;
         while(n>0){
            if(Q[B[i]]){
                cout<<B[i]<<" ";
                Q[B[i]]--;
                n--;
            }    
            i++;
            i%=m;
         }
         cout<<endl;
    }
}
