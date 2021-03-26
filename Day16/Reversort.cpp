/*
Platform :- Coding competition with google
Problem :- Reversort
Contest :- Google Codejam Practise Round 2021
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
        
        long long ans=0;
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
        
        cout<<ans<<endl;
    }
}
