/*
Platform :- Codechef
Problem :- CHARGES
Contest :- Codechef Lunchtime
Approach :- comopute the total distance between 1st and last element initially and for each query update the value of tot accordingly , looking after neighbours
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,q;
        cin>>n>>q;
        
        int A[n];
        int tot=0;
        
        for(int i=0;i<n;++i){
            char ch;
            cin>>ch;
            if(ch=='0')A[i]=0;
            else A[i]=1;
            if(i){
                if(A[i]!=A[i-1])tot++;
                else tot+=2;
            }
        }
        
      //  cout<<tot<<" check ";
        
        for(int i=0;i<q;++i){
            int x;
            cin>>x;
            if(n==1){
                cout<<0<<endl;
                continue;
            }
            x--;
            
            if(x==0 || x==n-1){
                if(x==0){
                if(A[x+1]==A[x]){
                    if(A[x]==0)A[x]=1;
                    else A[x]=0;
                    tot--;
                }
                else {
                    A[x]=A[x+1];
                    tot++;
                }
                }
                else{
                    if(A[x-1]==A[x]){
                        if(A[x]==0)A[x]=1;
                         else A[x]=0;
                        tot--;
                    }
                    else {
                        A[x]=A[x-1];
                        tot++;
                    }
                }
            }
            else{
               // cout<<x<<" "<<A[x]<<" "<<A[x-1]<<" "<<A[x+1]<<endl;
                //compare with previous value
                if(A[x]==A[x-1]){
                    tot--;
                }
                else{
                    tot++;
                }
                
                //cout<<tot<<" check ";
                if(A[x]==A[x+1]){
                    tot--;
                }
                else {
                    tot++;
                }
                
                if(A[x]==0)A[x]=1;
                else A[x]=0;
                
            }
            cout<<tot<<endl;
        }
        
    }
}
