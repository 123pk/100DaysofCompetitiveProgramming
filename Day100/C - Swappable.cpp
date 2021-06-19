/*
Platform :- Atcoder 
Problem :- C - swappable
Contest :- Atcoder Beginner contest 206
Approach :- First find all unique elements of array and sort them in decreasing order , for each value of unique elemnt the total number of valid pairs is 
            ( frequency_of_current_element * frequency_of_all_elements_smaller_than_it )   -----> add this value to total count
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     
     long long A[n];
     map<long long,int>P;
     vector<long long>temp;
     for(int i=0;i<n;++i){
         cin>>A[i];
         P[A[i]]++;
         if(P[A[i]]==1)temp.push_back(A[i]);
     }
     
      //temp contains all the unique elements
     sort(temp.begin(),temp.end());
     long long ans=0;
     int sz=n;
     
      // finding for each elemnt ( frequecy_of_curr_ele * frequency_of_small_ele )
     for(int i=temp.size()-1;i>=0;--i){
         long long z=sz-P[temp[i]];
         z*=P[temp[i]];
         ans+=z;
         sz-=P[temp[i]];
     }
     
     cout<<ans<<endl;
}
