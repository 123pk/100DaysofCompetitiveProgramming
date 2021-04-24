/*
Platform :- Atcoder
Contest :- Atcoder Beginner contest 199
Problem :- A - Square Inequality
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    
    a*=a;
    b*=b;
    c*=c;
    long long temp=a+b;
    if(temp<c)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
