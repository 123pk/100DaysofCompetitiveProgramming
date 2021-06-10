/*
Platform  :- Codeforces 
Contest :- codeforces round 725 Div 3
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
        long long mx=0,mn=1e18;
        for(int i=0;i<n;++i){
            cin>>A[i];
            mn=min(mn,A[i]);
            mx=max(mx,A[i]);
        }
        
        int ans=INT_MAX;
        int index=0;
        int c1=0,c2=0;
        int g=0;
        //find min or max from left
        for(int i=0;i<n;++i){
            if(A[i]==mn||A[i]==mx){
                c1++;
                index=i+1;
                if(A[i]==mn)g=1;
                break;
            }
            c1++;
        }
        
       
        // checkin remaining from left
        long long find;
        if(g){
            find=mx;
        }
        else{
            find=mn;
        } 
        
        //cout<<find<<" finding ";
        
        int d1=0;
        for(int i=index;i<n;++i){
            if(A[i]==find){
                d1++;
                break;
            }
           d1++;
        }
       
        ans=min(ans,c1+d1);
        //checkoing remaining from right
        d1=0;
        for(int i=n-1;i>=index;--i){
            if(A[i]==find){
                d1++;
                break;
            }
           d1++;
        }
        //cout<<" continue from right "<<d1<<endl;
        ans=min(ans,c1+d1);
        
        
        
        
        //starting from right
         
         index=0;
 
        int g2=0;
        //find min or max from left
        for(int i=n-1;i>=0;--i){
            if(A[i]==mn||A[i]==mx){
                c2++;
                index=i;
                if(A[i]==mn)g2=1;
                break;
            }
            c2++;
        }
        
        //ffinding remaing from left
        if(g2)find=mx;
        else find=mn;
        
        int d2=0;
        for(int i=0;i<index;++i){
            if(A[i]==find){
                d2++;
                break;
            }
           d2++;
        }
        ans=min(ans,c2+d2);
        
        //findoing from right
          d2=0;
        for(int i=index-1;i>=0;--i){
            if(A[i]==find){
                d2++;
                break;
            }
           d2++;
        }
        ans=min(ans,d2+c2);
        cout<<ans<<endl;
    }
}
