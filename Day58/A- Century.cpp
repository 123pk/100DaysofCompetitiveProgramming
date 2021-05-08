/*
Platform :- Atcoder
Problem :- A - Century 
Contest :- KYOCERA Programming Contest 2021（AtCoder Beginner Contest 200）
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    if(n==1)cout<<1<<endl;
    else{
        
        long long temp=n/100;
        if(n%100)temp++;
        cout<<temp<<endl;
    }
}
