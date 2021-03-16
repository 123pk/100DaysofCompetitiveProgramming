/*
Platform :- Codechef
Problem :- SPACEARR
Contest :- January Long Challenge
Hint :- Sort the array check if it possible to make array to permutaion ..if yes then find minimum number of operations required for changing it to permutation 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long int sum=0;
        int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        sort(A,A+n);
        int f=0;
        for(int i=0;i<n;++i){
            if(A[i]>(i+1)){
                f=1;break;
            }
            else{
                sum+=((i+1)-A[i]);
            }
        }
        
        if(f)cout<<"Second"<<endl;
        else{
            if(sum%2)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
}
