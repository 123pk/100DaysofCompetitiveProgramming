/*
Platform :- Codeforces
Contest :- Codeforces Round 723 Div 2
Problem :- B-I hate 1111
Approach :- There is easy solution of this one liner you can check out in editorial 
           My approach was to check all combination of values using recursion which add up to n as no of values are not more than 8 
           so no issue of TLE
*/
#include<bits/stdc++.h>
using namespace std;

long long A[8]={111111111,11111111,1111111,111111,11111,1111,111,11};

//try all permutation of Ax + By +..=Z where Z is given value and A,B,..are one of 11,111,...
bool func(long long value,long long x,int index){
    long long z=value/x;
    for(int i=z;i>=0;--i){
        long long temp=x*i;
        for(int j=index+1;j<8;++j){
            long long temp2=value-temp;
            
            if(temp2%A[j]==0){
                return  true;
            }
            
            if(func(temp2,A[j],j))return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        if(n<11){
            cout<<"NO"<<endl;
            continue;
        }
        long long start=A[0];
        if(func(n,start,0))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
