/*
Platform :- Codeforces 
Problem :- C - Challenege Clifs
Contest :- Codeforces Round 726 #Div 2 
Approach :- sort the array in ascending order , if n==2 print the sorted array else find the smallest value with minimum difference , then partition array into two parts [0:i] and [i+1,n]
           print elements [i+1,n] first then [0:i]
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         
         map<long long ,int>P;
         long long A[n];
         for(int i=0;i<n;++i){
             cin>>A[i];
             P[A[i]]++;
         }
         
         long long start=0,end=0;
         long long mx=1e18;
         sort(A,A+n);
         if(n==2){
             cout<<A[0]<<" "<<A[1]<<endl;
             continue;
         }
         for(int i=1;i<n;++i){
             long long temp=A[i]-A[i-1];
             if(temp<mx){
                 mx=temp;
                 start=i-1;
                 end=i;
             }
         }
         //cout<<start<<" "<<end<<" check \n";
         for(int i=end;i<n;++i){
             cout<<A[i]<<" ";
         }
         
         for(int i=0;i<=start;++i){
             cout<<A[i]<<" ";
         }
         cout<<endl;
         
    }
}
