/*
Platform :- Atcoder
Problem :- C - Comma
Contest :- Panasonic Programming Contest ( Atcoder Beginner Contest 105)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n<1000)
    {
        cout<<0<<endl;
        exit(0);
    }
    map<int,int>P;
    int d=0;
    for(int i=1;i<=15;++i){
        P[i]=d;
        if(i%3==0){
            d++;
        }
    }
    
    int k=0;
    string temp=to_string(n);
    k=temp.size()-1;
    
    long long flag=n;
    long long tot=0;
    for(int i=k;i>=3;--i){
        if(i==k){
            long long temp=pow(10,i);
            long long z=n-temp;
            flag=n-(n-temp);
            n=flag;
            z++;
            int zz=i/3;
             
            tot+=(z*zz);
        }
        else{
            long long temp=pow(10,i);
            long long z=n-temp;
            flag=n-(n-temp);
            n=flag;
            int zz=i/3;
           
            tot+=(z*zz);
        }
    }
    cout<<tot<<endl;
    
}
