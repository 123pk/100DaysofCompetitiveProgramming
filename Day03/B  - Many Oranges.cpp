/*
Platform :-Atcoder
Problem :- B - Many Oranges
Contest :- Panasonic Programming Contest ( Atcoder Beginner Contest 105)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x,y,z;
    cin>>x>>y>>z;
    z*=1000;
    
    long long temp=z/x;
    long long temp2=(z/y);
    if(z%y)temp2++;
    
    long long z3=z/temp2;
    if((temp) &&(x<=z3 && z3<=y)){
        cout<<min(temp,temp2)<<" "<<max(temp2,temp)<<endl;
    }
    else cout<<"UNSATISFIABLE"<<endl;
    
}
