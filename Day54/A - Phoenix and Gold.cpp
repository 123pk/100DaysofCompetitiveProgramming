/*
Platform :- Codeforces
Contest :- Codeforces Global Round 14
Problem :- A - Phoenix and Gold
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        
        long long A[n];
        int d=0;
        long long sum=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            sum+=A[i];
            if(A[i]==A[0])d++;
        }
        
        if(sum==x)cout<<"NO"<<endl;
        else {
            int g=0;
            sort(A,A+n);
            //cout<<"YES"<<endl;
            long long tot=0;
            for(int i=0;i<n;++i){
                long long temp=tot+A[i];
                if(temp==x){
                   // cout<<temp<<" ";
                    int j=i+1;
                    int f=0;
                    while(j<n){
                        if(A[j]!=A[i]){
                            f=1;
                            break;
                        }
                        j++;
                    }
                    
                     
                    if(f){
                        swap(A[i],A[j]);
                        tot+=(A[j]-A[i]);
                        continue;
                    }
                    
                    int f1=0;
                    int k=i-1;
                    while(k>=0){
                        if(A[k]!=A[i]){
                            f1=1;break;
                        }
                        k--;
                    }
                    
                    if(f==0 && f1==0){
                        g=1;break;
                    }
                    else{
                        if(k==0 && A[j]==x){
                            swap(A[i],A[j]);
                            tot+=(A[j]-A[i]);
                            continue;
                        }
                        else{
                            swap(A[k],A[j]);
                            tot+=(A[j]-A[k]);
                        }
                    }
                     
                    
                }
                tot+=A[i];
            }
            
            if(g)cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
            for(auto x:A)cout<<x<<" ";
            cout<<endl;
            }
        }
    }
}
