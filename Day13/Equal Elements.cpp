/*
Platform :- Hackerearth
Problem :- Equal Elements 
Contest :- March Circuits 

   SOLUTION WILL BE ADDED ONCE CONTEST IS OVER
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
		int c=0;
		for(int i=0;i<n;++i){
			cin>>A[i];
			if(A[i]%2)c++;
		}

		int d=n-c;
		cout<<(min(c,d))<<endl;
	}
}
