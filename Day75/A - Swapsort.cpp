/*
Platform :- Codeforces 
Contest :- Codeforces Round #277.5 Div 2
Problem :- A - Swap sort
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    long long A[n];
    long long B[n];
    for(int i=0;i<n;++i){
        cin>>A[i];
        B[i]=A[i];
    }
    
    sort(B,B+n);
    
    int ans=0;
    vector<pair<int,int>>temp;
    
    for(int i=0;i<n;++i){
        if(B[i]!=A[i]){
            for(int j=i+1;j<n;++j){
                if(A[j]==B[i]){
                    swap(A[i],A[j]);
                    temp.push_back({i,j});
                    ans++;
                    break;
                }
            }
        }
    }
    
    cout<<ans<<endl;
    for(int i=0;i<ans;++i){
        cout<<temp[i].first<<" "<<temp[i].second<<endl;
    }
}
