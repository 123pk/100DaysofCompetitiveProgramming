/*
Platform :- Codeforces
Contest :- C - Phoenix and Towers
Problem :- Codeforces Global Round 14
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m,x;
        cin>>n>>m>>x;
        
        int A[n];
        priority_queue<pair<int,int>>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P.push({A[i],i});
        }
         
        //case 1 m==n
        if(m==n){
            cout<<"YES"<<endl;
            for(int i=1;i<=n;++i)cout<<i<<' ';
            cout<<endl;
        }
        else{
            vector<int>B(m,0);
            vector<int>ans(n,0);
            int i=0;
            int c=0;
            while(!P.empty()){
                if(c%2==0){
                for(int j=0;j<m;++j){
                    pair<int,int> temp=P.top();
                    P.pop();
                    B[j]+=temp.first;
                    ans[temp.second]=j+1;
                  //cout<<temp.first<<" "<<j+1<<endl;
                    if(P.empty())break;
                }
                }
                else{
                    for(int j=m-1;j>=0;--j){
                        pair<int,int> temp=P.top();
                        P.pop();
                    B[j]+=temp.first;
                    ans[temp.second]=j+1;
                   // cout<<temp.first<<" "<<j+1<<endl;
                    if(P.empty())break;
                 //   cout<<" * ";
                  }
                }
                if(P.empty())break;
                c++;
            }
            int f=0;
            for(int i=1;i<m;++i){
                if(B[i]-B[i-1]>x){
                    f=1;break;
                }
            }
            
            if(f)cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                for(auto x:ans)cout<<x<<" ";
                cout<<endl;
            }
        }
    }
}
