/*
Platform :- Codeforces
Contest :- Codeforces Round #595 Div 3
Problem :- C2 - Good Numbers( Hard Version )
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        long long val=n;
        
        set<int>Q;
       // int f=0;
        vector<int>z;
        int tot=0;
        while(n){
            long long temp=1;
            int c=0;
            while(temp<n){
                temp*=3;
                c++;
                if(temp==n)break;
            }
            
            if(temp==n){
                z.push_back(c);
                break;
            }
            else{
                temp/=3;
                z.push_back(c-1);
                n-=temp;
            }
            
        }
        
        int xx=0;
        int f=0;
        for(auto x:z){
            if(Q.find(x)!=Q.end()){
                xx=x;
                f=1;
                break;
            }
            Q.insert(x);
        }
        
        if(f==0)cout<<val<<endl;
        else{
            int ed=xx;
            for(int i=xx;i<=40;++i){
                if(Q.find(i)==Q.end()){
                    xx=i;
                    break;
                }
            }
            
            long long ans=0;
            if(xx>z[0]){
                ans+=pow(3,xx);
                //cout<<ans<<endl;
            }
            else{
                long long rem=pow(3,xx);
                for(int i=xx+1;i<=z[0];++i){
                    if(Q.find(i)!=Q.end()){
                        rem+=pow(3,i);
                    }
                }
                 
                ans=rem;
            }
            cout<<ans<<endl;
        }
        
        
    }
}
