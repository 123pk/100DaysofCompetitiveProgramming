/*
Platform :- Coding competition with google
Problem :- Reversort Engineering
Contest :- Codejam Qualification Round 2021
**Partial correct
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        int n,tot;
        cin>>n>>tot;
        
        vector<int>AA;
        int f=0;
        for(int i=1;i<=n;++i){
            AA.push_back(i);
        }
        
        do{
            long long ans=0;
            long long A[n];
            for(int i=0;i<n;++i){
                A[i]=AA[i];
            }
        for(int i=0;i<n-1;++i){
            long long temp=A[i];
            int index=i;
            for(int j=i+1;j<n;++j){
                if(A[j]<temp){
                    temp=A[j];
                    index=j;
                }
            }
            if(index==i)ans++;
            else{
                index++;
                reverse(A+i,A+index);
                //cout<<(index-i)<<"& \n";
                ans+=(index-i);
            }
        }
        
        if(ans==tot){
            f=1;break;
        }
        }while(next_permutation(AA.begin(),AA.end()));
         
         if(f==0)cout<<"IMPOSSIBLE"<<endl;
         else{
             for(auto x:AA)cout<<x<<" ";
             cout<<endl;
         }
    }
}
