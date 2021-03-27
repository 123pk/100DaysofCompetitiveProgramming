/*
Platform :- Hackerearth
Problem :- Length of Valley
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
		long long pref[n],suff[n];
		for(int i=0;i<n;++i){
			cin>>A[i];
			if(i==0){
				pref[0]=1;
			}
			else{
				if(A[i]<A[i-1]){
					pref[i]=pref[i-1]+1;
				}
				else{
					pref[i]=1;
				}
			}
		}

		reverse(A,A+n);
		for(int i=0;i<n;++i){
			if(i==0){
				suff[0]=1;
			}
			else{
				if(A[i]<A[i-1]){
					suff[i]=suff[i-1]+1;
				}
				else{
					suff[i]=1;
				}
			}
		}
       reverse(A,A+n);
	   reverse(suff,suff+n);

	    
		for(int i=0;i<n;++i){
			
		   int temp=pref[i];
           if(i==n-1){
			   cout<<temp<<" ";
		   }
		   else{
			  
			   if(A[i]<A[i+1]){
				  // cout<<"\n"<<pref[i]<<" "<<suff[i+1]<<endl;
				   temp+=suff[i+1];
				   cout<<(temp)<<" ";
			   }
			   else{
				   cout<<temp<<" ";
			   }
		   }
		}
		cout<<endl;
	}
}
