/*
Platform :- Codeforces 
Problem :- B - M Arrays 
Contest :- Codeforces Round 708 Div 2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        int n,m;
        cin>>n>>m;
        
        long long A[n];
         
        map<long long,int>Q;
        for(int i=0;i<n;++i){
           cin>>A[i];   
           Q[A[i]%m]++;
        }
        
        int d=0;
        for(int i=0;i<=(m/2);++i){
            if(i==0){
                if(Q[i]){
                    d++;
                    n-=Q[i];
                }
            }
            else{
                int temp1=Q[i];
                int temp2=Q[m-i];
                if(temp1&&temp2){
                    if(abs(temp1-temp2)<=1){
                        d++;
                        n-=temp1;
                        n-=temp2;
                    }
                    else{
                        int z=min(temp1,temp2);
                        int z2=max(temp1,temp2);
                        z2-=(z+1);
                        n-=(z+1);
                        d++;
                        d+=z2;
                    }
                }
                else{
                    d+=(temp1+temp2);
                    n-=(temp1+temp2);
                }
            }
        }
        cout<<d<<endl;
         
    }
}
