/*
Platform :- Codechef
Problem :- Lunchtime
Contest :- Codechef March Lunch time 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        
        vector<int>ans;
        for(int i=0;i<n;++i){
            int d=0;
            for(int j=i-1;j>=0;--j){
                if(A[i]<A[j])break;
                else{
                    if(A[i]==A[j])d++;
                }
            }
            
            for(int j=i+1;j<n;++j){
                if(A[i]<A[j])break;
                else{
                    if(A[i]==A[j])d++;
                }
            }
            ans.push_back(d);
        }
        
        
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
    }
}
