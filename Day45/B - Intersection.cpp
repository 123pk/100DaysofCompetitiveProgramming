/*
Platform :- Atcoder
Contest :- Atcoder Beginner contest 199
Problem :- B - Intersection
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     
     int mn=INT_MAX,mx=INT_MIN;
     int A[n],B[n];
     for(int i=0;i<n;++i){
         cin>>A[i];
         mx=max(mx,A[i]);
     }
     
     for(int i=0;i<n;++i){
         cin>>B[i];
         mn=min(mn,B[i]);
     }
     
     //cout<<mx<<" "<<mn<<endl;
     if(mn<mx){
         cout<<0<<endl;
         exit(0);
     }
     int ans=(mn-mx)+1;
     cout<<ans<<endl;
}
