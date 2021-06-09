/*
Platform :- Codeforces 
Contest :- Codeforces Round 295
Problem :- two bottoms
Approach :-  if m<n then we have only one option is to substract 1 from it and it will take (n-m) steps ,
             else if "m" is odd it will take 2 steps , we will multiply by 2 and then substract 1, if it is even it will take one step , we will do this until we get m<n
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    int c=0;
    int temp=m;
    while(1){
        if(temp<=n){
            c+=(n-temp);
            break;
        }
        else{
            if(temp%2){
                c+=2;
                temp=(temp+1)/2;
            }
            else{
                temp/=2;
                c++;
            }
        }
    }
     
    int ans=c;
    cout<<ans<<endl;
}
