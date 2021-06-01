/*
Platform :- Codeforces
Contest :- Codeforces Beta Round 2
Problem :- A - Winner
Hint :- find the strings with max value then , out of those string find the string which gets to max value first
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
     
    long long mx=INT_MIN;
    vector<pair<string,long long>>Q;
    int d=0;
    map<string,long long>P,R;
    for(int i=0;i<n;++i){
        string s;
        long long t;
        cin>>s>>t;
        P[s]+=t;
       
        Q.push_back({s,t});
    }
    for(auto x:P){
      // cout<<x.first<<" "<<x.second<<endl;
        mx=max(mx,x.second);
    }
    //cout<<endl;
    
    
    string ans="";
    
    for(int i=0;i<n;++i){
        R[Q[i].first]+=Q[i].second;
        //cout<<Q[i].first<<" "<<Q[i].second<<" "<<R[Q[i].first]<<endl;
        if(R[Q[i].first]>=mx && P[Q[i].first]==mx){
            ans=Q[i].first;
            break;
        }
    }
     
    
    cout<<ans<<endl;
}
