/*
Platform :- Atcoder
Problem :- A - 119 × 2^23 + 1
Contest :- Atcoder Regular contest 119
Hint :- take a temp varible and run a loop  " while ( temp < = n ) " and increment temp to times 2 each time ( temp * = 2)
        for each value of temp find the sum and store the minimum out of all

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    long long temp=n,ans=1e18,x=1,d=0;
    while(x<=n){
        long long z=(temp/x);
        z+=(temp%x);
        z+=d;
        ans=min(ans,z);
        x*=2;
        d++;
    }
    cout<<ans<<endl;
}
