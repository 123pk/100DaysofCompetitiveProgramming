/*
Platform :- Codeforces
Contest :- Educationl round 109
Problem :- A - portion making
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        
        long long temp=100-x;
        temp=__gcd(x,temp);
        
        temp=(100/temp);
        cout<<temp<<endl;
    } 
    
}
