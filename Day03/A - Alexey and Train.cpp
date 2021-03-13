/*
Platform :- Codeforces
Problem :- A - Alexey and Train
Contest :- Codeforces Round 707 #Div 2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<pair<int,int>>Q;
        for(int i=0;i<n;++i){
            int x,y;
            cin>>x>>y;
            Q.push_back({x,y});
        }
        
        int B[n];
        for(int i=0;i<n;++i){
            cin>>B[i];
        }
        
        long long tot=0;
        int start=0;
        for(int i=0;i<n;++i){
            if(i==0){
                start=Q[i].first+B[i];
                if(i!=n-1){
                long long temp=(Q[i].second-Q[i].first);
                if(temp%2){
                   temp++;    
                }
                temp/=2;
                
                start+=temp;
                start=max(start,Q[i].second);
                }
                tot=start;
            }
            else{
                start+=(Q[i].first+B[i]-Q[i-1].second);
               
                if(i!=n-1){
                long long temp=(Q[i].second-Q[i].first);
                if(temp%2){
                   temp++;    
                }
                temp/=2;
                start+=temp;
                }
                 
                tot=start;
            }
        
        }
        cout<<tot<<endl;
    }
}
