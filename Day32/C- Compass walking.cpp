/*
Platform :- Atcoder
Problem :- C - Compass walking
Contest :- Atcoder Beginner Contest 198
*/
#include<bits/stdc++.h>
using namespace std;

float pk(int x1, int y1, int x2, int y2)
{
    // Calculating distance
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}

int main(){
     long long r,x,y;
     cin>>r>>x>>y;
     
    float tot=pk(x,y,0,0);
    
    if((tot==r)){
       cout<<1<<endl;
      exit(0);
    }
    if((tot<=(2*r))){
      cout<<2<<endl;
      exit(0);
    }
    float z=tot/r;
    long long ans=ceil(z);
     cout<<ans<<endl;
}
