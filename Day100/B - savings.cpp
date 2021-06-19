/*
Platform :- Atcoder
Problem :- B - savings
Contest :- Atcoder Beginner Contest 206
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     long long n;
     cin>>n;
     
     long long d=1;
     long long count=1;
     while(1){
         count=(d*(d+1))/2;
         
         if(count>=n)break;
         d++;
     }
    cout<<d<<endl;
}
