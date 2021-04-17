/*
Platform :- Atcoder
Contest :- Japanese Student Championship
Problem :- A - Competition
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     double x,y,z;
     cin>>x>>y>>z;
     
     double temp=y/x;
     long long c=ceil(temp*z)-1;
     
     cout<<c<<endl;
}
