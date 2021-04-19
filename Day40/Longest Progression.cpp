/*
Platform :- Coding competition with google
Contest :- Google Kickstart Round B 2021
Problem :- Longest Progression
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        int n;
        cin>>n;
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        int f=0;
        int c=0;
        long long dif=A[1]-A[0];
        for(int i=1;i<n;++i){
            long long temp=A[i]-A[i-1];
            if(temp!=dif){
                f=1;break;
            }
        }
        
        if(f==0){
            cout<<n<<endl;
        }
        else{
            int ans=0;
            long long dif=A[1]-A[0];
            int c=1;
            for(int i=1;i<n;++i){
                long long temp=A[i]-A[i-1];
                if(temp!=dif){
                   // cout<<c<<" ";
                    long long xxx=A[i];
                    A[i]=A[i-1]+dif;
                    long long x=dif;
                    int d=c+1;
                    for(int k=i+1;k<n;++k){
                        long long check=A[k]-A[k-1];
                        if(check==dif)d++;
                        else break;
                    }
                    A[i]=xxx;
                    ans=max(ans,d);
                    c=2;
                   // cout<<ans<<" "<<d<<" "<<(i+1)<<endl;
                }
                else{
                    c++;
                    if(i==n-1)ans=max(ans,c);
                }
                dif=temp;
            }
            
            reverse(A,A+n);
            dif=A[1]-A[0];
            c=1;
            for(int i=1;i<n;++i){
                long long temp=A[i]-A[i-1];
                if(temp!=dif){
                   // cout<<c<<" ";
                    long long xxx=A[i];
                    A[i]=A[i-1]+dif;
                    long long x=dif;
                    int d=c+1;
                    for(int k=i+1;k<n;++k){
                        long long check=A[k]-A[k-1];
                        if(check==dif)d++;
                        else break;
                    }
                    A[i]=xxx;
                    ans=max(ans,d);
                    c=2;
                   // cout<<ans<<" "<<d<<" "<<(i+1)<<endl;
                }
                else{
                    c++;
                    if(i==n-1)ans=max(ans,c);
                }
                dif=temp;
            }
            
            cout<<ans<<endl;
        }
        
    }
}
