/*
Platform :- Coding competition with google
Contest :- Google Kickstart Round B 2021
Problem :- Consecutive Primes
Hint :- We will look for prime close to sqrt(N) as their product will be clos to N . We will check for prime both <= and > sqrt(N) whose product is (<=N)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        long long n;
        cin>>n;
        
        long long temp=sqrt(n);
        long long temp2=temp+1;
        
        while(1){
            int f=0;
            for(long long j=2;j*j<=temp;++j){
                if(temp%j==0){
                    f=1;break;
                }
            }
            if(f)temp--;
            else break;
        }
        
        
        while(1){
            int f=0;
            for(long long j=2;j*j<=temp2;++j){
                if(temp2%j==0){
                    f=1;break;
                }
            }
            if(f)temp2++;
            else break;
        }
        
        
        long long ans=temp*temp2;
        if(ans<=n)cout<<ans<<endl;
        else{
            temp2=temp-1;
            while(1){
            int f=0;
            for(long long j=2;j*j<=temp2;++j){
                if(temp2%j==0){
                    f=1;break;
                }
            }
            if(f)temp2--;
            else break;
        }
        
          ans=temp*temp2;
          cout<<ans<<endl;
        }
        
    }
}
