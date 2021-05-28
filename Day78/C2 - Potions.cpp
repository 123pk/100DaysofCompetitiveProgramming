/*
Platform :- Codeforces 
Contest :- Codeforces Round 723 Div 2
Problem :- C1 Potions
Approch :- I was not able to figure out for solution during contests but it was an good proble
           Approach is to take a variable tot and add value A[i] for 0<=i<n and increment our "count"
            i . if A[i]<0 then add it to min priority queue
            ii. if tot<0 we subtract the smallest value of priority queue from tot and decrement our "count"
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    long long A[n];
    for(int i=0;i<n;++i)cin>>A[i];
    
    int ans=0;
    long long tot=0;
    priority_queue<long long,vector<long long>,greater<long long>>P;
    for(int i=0;i<n;++i){
        if(A[i]<0)P.push(A[i]);
        
        tot+=A[i];
        ans++;
        
        if(tot<0){
            tot-=P.top();
            P.pop();
            ans--;
        }
    }
    cout<<ans<<endl;
}
