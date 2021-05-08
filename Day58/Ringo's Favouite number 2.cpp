/*
Platform :- Atcoder
Problem :- Ringo's Favorite number 2
Contest :- KYOCERA Programming Contest 2021（AtCoder Beginner Contest 200）
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    long long A[n];
    map<long long,long long>P;
    for(int i=0;i<n;++i){
        cin>>A[i];
        P[A[i]%200]++;
    }
    
    long long tot=0;
    for(auto x:P){
        long long temp=x.second;
        temp=temp*(x.second-1);
        temp/=2;
        tot+=temp;
    }
    
    cout<<tot<<endl;
}
