/*
Platform :- Codeforces 
Contest : - Educational round 110
Problem :- A - fair playoff
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long ,int>P,pair<long long,int>Q){
    
    return P.first>Q.first;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        
        long long temp=max(a,b);
        long long temp2=max(c,d);
        
        long long A[4]={a,b,c,d};
        sort(A,A+4);
        
        if((A[3]==temp && A[2]==temp2) ||(A[3]==temp2 && A[2]==temp))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
