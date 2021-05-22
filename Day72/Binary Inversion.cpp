/*
Platform :- Hackerearth
Contest :- Hackerearth May circuits
Problem :- Binary Inversions
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,a;
	long long x;
	cin>>n>>a>>x;
    
	long long lim=a*(n-a);
	if(x>lim){
		cout<<"-1"<<endl;
		exit(0);
	}

	long long A[n];
	long long z=n-a;
	for(int i=0;i<n;++i){
		if(z==0){
			A[i]=0;
			continue;
		}
		long long temp=(x/z);
		if(x%z)temp++;

		if(temp<a){
			A[i]=0;
			a--;
		}
		else {
			A[i]=1;
			x-=a;
			z--;
		}

	}

	for(auto x:A)cout<<x<<" ";
	cout<<endl;

}
