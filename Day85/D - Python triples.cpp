/*
Platform :- Codeforces
Contest :- Educational rond 104 # div 2
Problem :- D - Python triples
Approach :- we need to simplify the given formulae and pythagoras theorem 
           (i) eq:- ( a^2 + b^2 = c^2 )              ----> pythagoras theorem
           (ii)eq:-  ( c = a^2 - b)                   -----> given equation
           * put the value of 'c' from equtaion (ii) to equation (i) and simplify
           * we will get( ( a^2 - 1 ) = 2b ) -----> we can easiy conclude that 'a' is always 'odd' 
           * we can find value of [ 'b' = ( a^2 -1 )/2 ]  and 'c' = [ a^2 - b ] .
           * we will run an while loop until our value of 'c' is <= n  and increment our answer count
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        if(n<5){cout<<"0"<<endl;continue;}
        long long ans=0;
        long long a=3,b=0,c=0;
        while(1){
        
            long long temp=a*a;
            b=((temp)-1)/2;
            c=(temp)-b;
            if(c<=n)ans++;
            else break;
           // cout<<a<<" "<<b<<" "<<c<<" "<<ans<<endl;
            a+=2;
        }
        cout<<ans<<endl;
        
    }
}
