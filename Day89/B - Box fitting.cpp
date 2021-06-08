/*
Platform :- Codeforces 
Contest :- CodeCraft-21 and Codeforces Round #711 (Div. 2)
Problem :- B - Box fitting
Approach :- We start with the biggest box that can be fit in left over space , if there are no such boxes then we increment the height so left over space become
            max_possible again and we repeat this until last box is placed
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        long long width;
        cin>>n>>width;
        
        long long A[n];
        long long tot=0;
        map<long long ,int>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot+=A[i];
            P[A[i]]++;
        }
        
        if(tot<=width)cout<<1<<endl;
        else{
            int c=n;
            int ans=0;
            long long fill=0;
            while(c){
                
                long long z=width-fill;
                string temp=bitset<32>(z).to_string();
                int d=0;
                reverse(temp.begin(),temp.end());
                for(int i=0;i<32;++i){
                    if(temp[i]=='1'){
                        d=i;
                    }
                }
         
                int f=0;
                for(int i=d;i>=0;--i){
                    long long val=pow(2,i);
                    if(P[val]){
                        fill+=val;
                        P[val]--;
                        f=1;
                        break;
                    }
                }
                
                if(f==0){
                   ans++;
                  // cout<<z<<" checking "<<endl;
                    fill=0;
                    long long z1=width-fill;
                string temp=bitset<32>(z1).to_string();
                 int d1=0;
                 reverse(temp.begin(),temp.end());
                for(int i=0;i<32;++i){
                    if(temp[i]=='1'){
                        d1=i;
                    }
                }
                
                for(int i=d1;i>=0;--i){
                    long long val=pow(2,i);
                    if(P[val]){
                        fill+=val;
                        P[val]--;
                        break;
                    }
                }
                    
                }
                
                
                c--;
                if(fill==width){
                    ans++;
                    fill=0;
                    if(c==0){
                        break;
                    }
                }
                if(c==0){
                    if(fill<width) ans++;
                    break;
                }
                
               // cout<<fill<<" "<<width<<" "<<ans<<endl;
            }
            
            cout<<ans<<endl;
        }
        
         
         
        
    }
}
