/*
Platform :- Codeforces 
Problem :- F - interesting functions
Contest :- Codeforces Round #725 Div 3
Approach :- You need to analyse the problem on certain test case , You will find that atleast ( b-a) digits will be changed as 
            we are going from 'a' to 'b' .
            if element is divisible by 10 , one extra digit is changed,
            similarly if element is divisible by 100 one more extra digit is changed ,
            moving from 99 - >100 , atleast (100 - 99) digits will be changed which is '1'
            * as 100 is divisible by 10 one more digit is change so total '2' digits are changed
            * and 100 is divisible by 100 so one more digit is changed , hence total count = '3' which is our answer ,
            similarly we will check for all 10,100,1000,10000....till 100000000 .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long a,b;
        cin>>a>>b;
        
        long long ans=(b-a);
        long long temp=a;
        long long c1=0;
        while(1){
            c1+=(temp/10);
            temp/=10;
            if(temp==0)break;
        }
        
        temp=b;
        long long c2=0;
        while(1){
            c2+=(temp/10);
            temp/=10;
            if(temp==0)break;
        }
        ans+=(c2-c1);
        cout<<ans<<endl;
    }
}
