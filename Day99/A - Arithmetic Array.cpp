/*
Platform :- Codeforces
Contest :- Codeforces Round 726 #Div 2
Problem :- A - Arithmetic Array
Approach :- find the sum of values of array if (sum<n) ans=1 , as we can add ((n-(sum))+1) value to array which will give us mean =1 , else 
            we need to add ( sum - n) 0's to array to make mean =1 so ans in this case is (sum-n)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long tot=0;
        for(int i=0;i<n;++i){
            long long x;
            cin>>x;
            tot+=x;
        }
        if(tot<0){
            cout<<1<<endl;
            continue;
        }
        
        if(tot<n){
            cout<<1<<endl;
        }
        else{
            long long ans=(tot-n);
            cout<<ans<<endl;
        }
        
    }
}
