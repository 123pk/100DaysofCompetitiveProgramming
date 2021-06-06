/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 204
Problem :- A - Rock Paper scissor
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    
    if(x==y)cout<<x<<endl;
    else {
        if((x==0 && y==1)  || (y==0 && x==1)){
            cout<<2<<endl;
        }
        else{
            if((x==1 && y==2) || (y==1 && x==2))cout<<0<<endl;
            else cout<<1<<endl;
        }
    }
}
