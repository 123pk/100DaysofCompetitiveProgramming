/*
Platform :- Coding Competitions with google
Problem :- Trouble Sort
Contest :- Google Codejam Qualification Round 2018
*/

#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int j=1;j<=t;++j)
    {
        long int N,i;
        cin>>N;
        
        long long A[N],index,f=0;
        vector<long long>B,C;
        for(i=0;i<N;++i)
        {
            cin>>A[i];
            if(i%2)C.push_back(A[i]);
            else B.push_back(A[i]);
        }
        
         sort(C.begin(),C.end());
         sort(B.begin(),B.end());
         
          vector<long long>ans;
             for(int i=0;i<(B.size());++i){
                 if((N%2) && i==B.size()-1){
                     ans.push_back(B[i]);
                 }
                 else{
                     ans.push_back(B[i]);
                     ans.push_back(C[i]);
                 }
             }
             
             for(int i=0;i<N-1;++i){
                 if(ans[i]>ans[i+1]){
                     f=1;
                     index=i;
                     break;
                 }
             }
          
        
        if(f==0)
        {
            cout<<"Case #"<<j<<": "<<"OK"<<endl;
        }
        else
        {
            cout<<"Case #"<<j<<": "<<index<<endl;
        }
    }
}
