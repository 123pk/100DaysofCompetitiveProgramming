/*
Platform :- Codeforces 
contest :- Codeforces Round #719 Div 3
Problem :- Ordinary Number
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         long long n;
         cin>>n;
         
         int c=0;
         long long d=1;
         for(long long i=1;i<=n;){
             c++;
             
             string temp=to_string(i);
             if(count(temp.begin(),temp.end(),'9')==temp.size()){
                 d*=10;
                 i=0;
                 d+=1;
             }
             //cout<<c<<" "<<i<<endl;
             i+=d;
         }
         cout<<c<<endl;
    }
}
