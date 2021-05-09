/*
Platform :- Codeforces
Contest :- Codeforces Round 720
Problem :- A - Nastia and Nearly Good Numbers
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long A,B;
        cin>>A>>B;
        
        long long y=A*B,z=y;
        if(B==1)
        {cout<<"NO"<<endl;
        continue;}
        
      
        cout<<"YES"<<endl;
        cout<<(A)<<" "<<(y)<<" "<<(y+A)<<endl;
        
    }
}
