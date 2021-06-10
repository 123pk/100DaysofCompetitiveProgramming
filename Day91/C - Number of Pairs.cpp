/*
Platform :- Codeforces
Contest :- Codeforces Round 725 Div 3
Problem :- C - Number of Pairs
Hint :- Binary search find number of values in range (l-A[i]) to (r-A[i])
*/
#include<bits/stdc++.h>
using namespace std;

//search 1
int search1(vector<long long>&arr,int low,long long &k){
   //int low = 0;
   int len=arr.size();
   int high = len -1;
   int mid = (high+low)/2;
   int index = -1;
   while(low <= high){
      mid =( low + high ) / 2;
      if(arr[mid] >= k){
         index = mid;
         high = mid-1;
      }
      else{
         low=mid+1;
      }
   }
   return (index+1);
} 

//searh 2

int search2(vector<long long>&arr,int low,long long &k){
   //int low = 0;
   int len=arr.size();
   int high = len -1;
   int mid = (high+low)/2;
   int index = -1;
   while(low <= high){
      mid =( low + high ) / 2;
      if(arr[mid] <= k){
         index = mid;
         low = mid+1;
      }
      else{
         high=mid-1;
      }
   }
   return (index+1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         long long l,r;
         cin>>n>>l>>r;
         
         vector<long long>A(n);
         //map<long long,int>P;
         for(int i=0;i<n;++i){
             cin>>A[i];
         }
         
         sort(A.begin(),A.end());
         
         long long ans=0;
         for(int i=0;i<n;++i){
            if(A[i]>=r  || A[i]>(r-A[i]))break;
            
            long long lo_lim=l-A[i];
            long long up_lim=r-A[i];
            int c1=0,c2=0;
            if(A[i]>=l){
                lo_lim=1;
                
          
                 c1=search1(A,i+1,lo_lim);
                c2=search2(A,i+1,up_lim);
                
            }
            else{
                 c1=search1(A,i+1,lo_lim);
                 c2=search2(A,i+1,up_lim);
            }
         //   cout<<A[i]<<" "<<lo_lim<<" "<<up_lim<<" "<<c1<<" "<<c2<<endl;
            
            if(c1==0 || c2==0  || c1>c2)continue;
            ans+=(c2-c1)+1;
            
         }
         
         cout<<ans<<endl;
    }
    
}
