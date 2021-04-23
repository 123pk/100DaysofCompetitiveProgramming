/*
Platform :- Codeforces
Contest :- Contest 2050 and Codeforces Round #718 (Div. 1 + Div. 2)
Problem : A - Sum of 2050
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        long long z=2050;
        if(n<z)cout<<"-1"<<endl;
        else{
            long long temp=z;
            vector<long long>P;
            while(temp<n){
                P.push_back(temp);
                temp*=10;
            }
            
            if(temp>n)temp/=10;
            
            if(temp==n)cout<<"1"<<endl;
            else{
                  int f=0;int ans=0;
                for(int i=P.size()-1;i>=0;--i){
                    long long z=P[i];
                  
                    int d=0;
                    while(1){
                        int g=0;
                        while(z>n){
                            if(z==2050){
                                g=1;break;
                            }
                            z/=10;
                        }
                        if(g)break;
                        long long temp=n/z;
                        d+=temp;
                        temp*=z;
                        n-=temp;
                        
                        if(n<=0){
                            f=1;break;
                        }
                    }
                    if(f){
                        ans=d;
                        break;
                    }
                }
                
                if(f)cout<<ans<<endl;
                else cout<<"-1"<<endl;
            }
        }
    }
}
