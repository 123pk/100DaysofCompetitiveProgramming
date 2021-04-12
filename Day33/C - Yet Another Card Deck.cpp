/*
Platform :- Codeforces
Contest :- Educational Round 107 
Problem :- C - Yet Another Card Deck
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    
    vector<int>A(50);
    for(int i=0;i<50;++i)A[i]=0;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        if(A[x-1]==0){
            A[x-1]=i+1;
        }
    }
      
     //cout<<endl;
    for(int i=0;i<q;++i){
        int c;
        cin>>c;
        c--;
        
        cout<<A[c]<<" ";
        int temp=A[c];
        for(int j=0;j<50;++j){
            if(j==c)continue;
            if(A[j]>0){
                if(A[j]<A[c])A[j]++;
            }
        }
        A[c]=1;

    }
    cout<<endl;
}
