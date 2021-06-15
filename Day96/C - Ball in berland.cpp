/*
Platform :- Codeforces
Contest :- Codeforces Round 693 #Div 3
Problem :- C - Ball in Berland
Approach :- Calcuate the occurnece of each 'boy' in dance pair and each 'girl' in dance pair separately.
            There are 'k' pairs which are possible , run a loop on all 'k' pairs from starting and for each pair there are 'k-1' pairs left which we can select
            but out of those 'k-1' pairs current boy and girl are present in 'x' pairs and 'y' pairs respectively , and current boy and girl for a good pair themselves so we
            substract '1' from total occurences of current boy and current girl in valid pairs -->(x-1) & (y-1) respectively .
            So we can map them with ( (k-1)- ((x-1)+(y-1)) ) pairs respectively for each valid pairs.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        
        int A[k],B[k];
        int c[a]={0},d[b]={0};
        
        for(int i=0;i<k;++i){
            
            cin>>A[i];
            A[i]--;
            c[A[i]]++;
        }
        
        for(int i=0;i<k;++i){
            cin>>B[i];
            B[i]--;
            d[B[i]]++;
        }
        
        long long ans=0;
        for(int i=0;i<k;++i){
            ans+=((k+1)-(c[A[i]]+d[B[i]]));
        }
        ans/=2;
        cout<<ans<<endl;
    }
}
