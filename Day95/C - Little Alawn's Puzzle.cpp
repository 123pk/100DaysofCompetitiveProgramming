  
/*
Platform :- Codeforces 
Contest :- Codeforces LATOKEN Round 1 (Div. 1 + Div. 2)
Problem :- C - Little Alawn's Puzzle
Approach :- 2^No of connected componenets in array 
*/
#include<bits/stdc++.h>
using namespace std;

long long find(long long a,long long b,long long mod){
    long long ans=1;
    a=a%mod;
    while(b){
        if(b%2)ans=(ans*a)%mod;
        
        a=(a*a)%mod;
        b>>=1;
    }
    
    return ans;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n],B[n];
        map<long long,int>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]]=i;
        }
        
        vector<int>Q[n];
        for(int i=0;i<n;++i){
            cin>>B[i];
            Q[P[A[i]]].push_back(P[B[i]]);
        }
        
        int c=0;
        vector<int>visited(n);
        
        for(int i=0;i<n;++i){
        
            if(visited[P[A[i]]]==0){
                c++;
                queue<int>R;
                R.push(P[A[i]]);
                visited[P[A[i]]]++;
                while(!R.empty()){
                    int zz=R.size();
                    for(int k=1;k<=zz;++k){
                        
                        int temp=R.front();
                        R.pop();
                        
                        int xx=Q[temp][0];
                        if(visited[xx]==0){
                            visited[xx]++;
                            R.push(xx);
                        }
                    }
                }
            }
        }
        long long mod=1e9+7;
        long long ans=find(2ll,c,mod);
        cout<<ans<<endl;
    }
}
