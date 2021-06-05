/*
Platform :- Codeforces 
Contest :- Education Round 110
Problem :- B - Array Reordering
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long ,int>P,pair<long long,int>Q){
    
    return P.first>Q.first;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
       int n;
       cin>>n;
       
       long long A[n];
       int c=0;
       vector<long long>temp,temp2;
       for(int i=0;i<n;++i){
           cin>>A[i];
           if(A[i]%2==0){
               c++;
               temp.push_back(A[i]);
           }
           else{
               temp2.push_back(A[i]);
           }
       }
       
       sort(temp.begin(),temp.end());
       sort(temp2.begin(),temp2.end());
       
       for(auto x:temp2)temp.push_back(x);
       
       long long ans=0;
       
       for(int i=0;i<temp.size();++i){
           for(int j=i+1;j<temp.size();++j){
               long long z=2*temp[j];
               long long x=__gcd(temp[i],z);
               if(x>1)ans++;
           }
       }
       
       cout<<ans<<endl;
        
    }
}
