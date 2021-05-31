/*
Platform :- Codechef
Problem :- TANDJ1
Contest :- Codechef Lunchtime
Hint :- if we can reach our destination in 'x' steps and 'x' < k then we will move around and will only be able to come back if (k-x) is even
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        
        long long temp=abs(a-c)+abs(b-d);
        if(k<temp)cout<<"NO"<<endl;
        else{
            long long z=k-temp;
            if(z%2)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
    }
}
