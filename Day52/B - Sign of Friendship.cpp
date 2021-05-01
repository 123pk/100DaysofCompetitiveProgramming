/*
Platform :- Atcoder
Problem :- B - Sign of Friendship
Contest :- Zone energy Programming contest
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     int n;
     double d,h;
     cin>>n>>d>>h;
     
     double mf=h/d;
     
   //  vector<pair<long long>>P;
     double ans=-1.0;
     for(int i=0;i<n;++i){
         double x,y;
         cin>>x>>y;
         
         double m=(h-y)/((d-x));
         
         if(mf<=m){
             double zzz=0;
             ans=max(ans,zzz);
         }
         else{
         double z=-m*(x)+y;
        // cout<<z<<" check ";
         
             ans=max(ans,z);
          
         }
     }
     
     string an=to_string(ans);
     cout<<an<<endl;
     
}
