/*
Platform :- Codeforces
Contest :- Codeforces Round #714 Div2
Problem :- Array and Peaks
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int temp=(n-1)/2;
        
        if(temp<k){
            cout<<"-1"<<endl;
        }
        else{
            vector<int>P;
            for(int i=1;i<=(n+1)/2;++i){
                P.push_back(i);
            }
            
            vector<int>Q;
            for(int i=((n+1)/2 )+1;i<=n;++i){
                Q.push_back(i);
            }
            
            int i=0,j=0;
            while(k--){
                cout<<P[i]<<" ";
                if(j==Q.size())break;
                cout<<Q[j]<<" ";
                i++;
                j++;
            }
            
              while(i<P.size()){
                  cout<<P[i]<<" ";
                  i++;
              }
                while(j<Q.size()){
                    cout<<Q[j]<<" ";
                        j++;
                }
            
            cout<<endl;
        }
    }
}
