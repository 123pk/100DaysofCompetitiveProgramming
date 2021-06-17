/*
Platform :- Codeforces 
Problem :- B - Books
Contest :- Codeforces Round 171 Div 2
Approach :- Used sliding window technique to slide from left to right and find the sum , as the sum becomes greater than 'k' then we start removing element from start of window
            until the sum is <='k' and maintain and change count accordiny
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long t;
    cin>>n>>t;
    
    int ans=0;
    long long A[n];
    int start=0;
    for(int i=0;i<n;++i){
        cin>>A[i];
    }
    
    int d=0;
    long long tot=0;
    //start stores the start of our current subarray ( left side of our window)
    for(int i=0;i<n;++i){
        long long temp=A[i]+tot;
        if(temp>t){
            ans=max(ans,d);
            d++;
         
            while(temp>t  && start<=i){
                 temp-=A[start];
                 
                 d--;
                 start++;
                 if(temp<=t)break;
            }
            tot=temp;
        }
        else{
            d++;
            tot+=A[i];
            if(i==n-1)ans=max(ans,d);
        }
    }
    
    cout<<ans<<endl;
}
