/*
Platform :- Coding competitions with google
Contest :- Kickstart Round C 2021
Problem :- Alien Generator
Approach :- total number of odd factors of given number 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        long long g;
        cin>>g;
        
         long long ans=0;
         set<long long>temp;
         for(long long i=1;i*i<=g;++i){
             if(g%i==0){
                 if(i%2){
                     temp.insert(i);
                 }
                 if((g/i)%2){
                     temp.insert((g/i));
                 }
             }
         }
        ans=temp.size();

       
        cout<<ans<<endl;
    }
}
