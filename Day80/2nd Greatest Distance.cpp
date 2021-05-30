/*
Platform :- Atcoder
Problem :- 2nd Greatest Distance
Contest :- Atcoder Regular Contest 121
*/
#include<bits/stdc++.h>
using namespace std;

bool comp2(pair<long long,long long>P,pair<long long,long long>Q){
    return P.second<Q.second;
}

bool comp(pair<long long,long long>P,pair<long long,long long>Q){
    return P.first<Q.first;
}

int main(){
    int n;
    cin>>n;
    
    vector<pair<long long,long long>>P,Q;
    for(int i=0;i<n;++i){
        long long x,y;
        cin>>x>>y;
        
     P.push_back({x,y});
    }
    
    Q=P;
    sort(P.begin(),P.end(),comp);
    sort(Q.begin(),Q.end(),comp2);
  
    vector<long long>zz;
    
    long long temp=abs(P[n-1].first-P[0].first);
    zz.push_back(temp);
    temp=abs(P[n-1].first-P[1].first);
    zz.push_back(temp);
    temp=abs(P[n-2].first-P[0].first);
    zz.push_back(temp);

    
    temp=abs(Q[n-1].second-Q[0].second);
    if(zz[0]==temp && P[n-1].first==Q[n-1].first){
        
    }else zz.push_back(temp);
    
    temp=abs(Q[n-1].second-Q[1].second);
    zz.push_back(temp);
    temp=abs(Q[n-2].second-Q[0].second);
    zz.push_back(temp);
     temp=abs(Q[n-1].second-Q[n-2].second);
    zz.push_back(temp);
    
    sort(zz.begin(),zz.end());
    
    cout<<zz[zz.size()-2]<<endl;
}
