/*
Platform :- Hackerearth
Contest :- Hackerearth May circuits 
Problem :- Natural XOR element
Hint :- ans is from this set {0,1,2} . Analyse 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		long long n;
		cin>>n;

		int x=n%4;

		if(x==0)cout<<1<<" "<<n<<endl;
		else if(x==3)cout<<0<<endl;
		else if(x==2){
            cout<<2<<" "<<(n)<<" "<<1<<endl;
		}
		else{
           cout<<1<<" "<<1<<endl;
		}

	}
}
