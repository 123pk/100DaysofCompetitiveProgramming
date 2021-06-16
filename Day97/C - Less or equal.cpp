/*
Platform :- Codeforces 
Contest :- Codeforces Round 479
Problem :- C - less or equal
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    long long  A[n];
    for(int i=0;i<n;++i)cin>>A[i];
    
    sort(A,A+n);

    long long ans=0;
    int c=0;
    long long temp=A[0];
    int tot=0;
    int g=0;
    if(k==0){
        if(A[0]==1)cout<<"-1"<<endl;
        else cout<<1<<endl;
        exit(0);
    }
    for(int i=0;i<n;++i){
        if(temp==A[i]){
            c++;
            
            if(i==n-1){
                tot+=c;
                if(tot==k){
                g=1;
                ans=A[i];
                break;
            }
              //  check.push_back(c);
            }
        }
        else{
            temp=A[i];
            tot+=c;
            if(tot==k){
                g=1;
                ans=A[i-1];
                break;
            }
           // check.push_back(c);
            c=1;
            if(i==n-1){
                tot+=c;
            }
           
            if(tot==k){
                g=1;
                ans=A[i];
                break;
            }
           // if(i==n-1)//check.push_back(c);
        }
      //  cout<<tot<<" ";
    }
    
    
    
    if(g==0)cout<<"-1"<<endl;
    else cout<<ans<<endl;
}
