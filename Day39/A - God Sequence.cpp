/*
Platform :- Atcoder
Problem :- A - God Sequence
Contest :- Atcoder Regular Contest 117
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    
    int tot=0;
    if(a==b){
        int tot=2;
    for(int i=0;i<a;++i){
        cout<<tot<<" ";
        tot+=2;
    }
    tot=-2;
    for(int i=0;i<a;++i){
        cout<<tot<<" ";
        tot-=2;
    }
    cout<<endl;
    exit(0);
    }
    
    if(a>b){
        int tot=0;
        int temp=2;
        for(int i=1;i<=a;++i){
            cout<<temp<<" ";
            tot+=temp;
            temp+=2;
        }
        temp=2;
        for(int i=1;i<=b;++i){
            if(i==b){
                cout<<"-"<<tot<<endl;
            }
            else {
                cout<<"-"<<temp<<" ";
                tot-=temp;
                temp+=2;
            }
        }
    }
    else{
        long long tot=0,temp=2;
        for(int i=0;i<b;++i){
            cout<<"-"<<temp<<" ";
            tot+=temp;
            temp+=2;
        }
       temp=2;
        for(int i=0;i<a;++i){
            if(i==(a-1)){
                cout<<tot<<endl;
            }
            else {
                cout<<temp<<" ";
                tot-=temp;
                temp+=2;
            }
        }
    }
}
