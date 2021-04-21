/*
Platform :- Codeforces 
Contest :- Codeforces Round #717 Div 2
Problem :- B - AGAGA XOOORRR
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long ans=0;
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
            ans=ans xor A[i];
        }
        
         
         
       // cout<<((3 ^ 2)^3)<<endl;
        if(ans==0)cout<<"YES"<<endl;
        else {
             
           int d=0;
           long long temp=0;
            for(int i=0;i<n;++i){
                
              temp=temp xor A[i]; 
              if(temp==ans){
                    d++;
                    temp=0;
                    continue;
                }
            }
          
          if(d>1 && temp==0)cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
           
        }
        
         
    }
}
