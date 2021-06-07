/*
Platform :- Codeforces 
Contest :- Codeforces Round 724
Problem :- C - Diluc and Kaeya
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
          int n;
          cin>>n;
          
          string s;
          cin>>s;
          
          map<pair<int,int>,int>P;
          int d=0,k=0;
          for(auto x:s){
              if(x=='D')d++;
              else k++;
              
              int temp=__gcd(k,d);
              cout<<(++P[{d/temp,k/temp}])<<" ";
          }
          cout<<endl;
    }
}
