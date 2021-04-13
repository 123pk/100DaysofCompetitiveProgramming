/*
Platform :- Codedrills
Contest :- Practise Contest ICPC Amritapuri
Problem :- Dragonado and Problem
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long,long long>P,pair<long long,long long>Q){
  if(P.second==Q.second){
	  return P.first<Q.first;
  }
	return P.second>Q.second;
}
int main(){
	
	int t;cin>>t;
	while(t--){
     int n,m;
	long long k;
	 cin>>n>>m>>k;
	 
	  long long A[n];
		for(int i=0;i<n;++i)cin>>A[i];
		
		long long B[m];
		for(int i=0;i<m;++i)cin>>B[i];
		
		long long C[m];
		vector<pair<long long,long long>>P;
		for(int i=0;i<m;++i){
			cin>>C[i];
			P.push_back({B[i],C[i]});
		}
		sort(P.begin(),P.end(),comp);
		sort(A,A+n);
		
		long long z=0;
		for(int i=0;i<(m/2);++i){
		  z+=P[i].first;
		}
		long long tot=k-z;
		int ans=0;
		int i=0;
		while(tot>0){
			if(tot<A[i])break;
			tot-=A[i];
			ans++;
			i++;
			if(i==n)break;
		}
		
		cout<<ans<<endl;
	}
	
}
