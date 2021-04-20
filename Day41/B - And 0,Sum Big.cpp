/* 
Platform :- Codeforces 
Contest :- Codeforces Round #716 Div 2 
Problem :- B - And 0,Sum Big
*/
#include<bits/stdc++.h>
using namespace std;

int pk(long long x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
    int n,k;
    cin>>n>>k;
    
    int mod=1e9+7;
    int temp=(n-1)*k;
     
    
     int z=pk(n,k,mod);
     cout<<z<<endl;
    }
}
