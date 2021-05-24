/*
Platform :- Codeforces 
contest :- Codeforces Round 722
Problem :- B - Sifid and Strange Subsequences
*/
#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        sort(A,A+n);
        long long mn=1e18;
        
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        
        if(n==2){
            if(A[0]<=0)cout<<2<<endl;
            else cout<<1<<endl;
            continue;
        }
        
        int ans=0;
        for(int i=1;i<n;++i){
            mn=min(mn,A[i]-A[i-1]);
            if(mn<A[i]){
                ans=i;break;
            }
        }
        
        if(ans)cout<<ans<<endl;
        else cout<<n<<endl;
 
    }
}
