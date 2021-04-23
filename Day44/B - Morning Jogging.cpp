/*
Platform :- Leetcode
Problem :- B - Morning Jogging
Contest :- Contest 2050 and Codeforces Round #718 (Div. 1 + Div. 2)
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long,int>P,pair<long long,int>Q){
    if(P.first==Q.first){
        return P.second<Q.second;
    }
    return P.first<Q.first;
}
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        vector<pair<long long,int>>temp;
        long long A[n][m];
      
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>A[i][j];
                temp.push_back({A[i][j],i});
                P[A[i][j]].push_back(i+1);
                
            }
        }
        
        
        sort(temp.begin(),temp.end(),comp);

        long long B[n][m];

         for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                B[i][j]=0;
            }
        }
        
        
        for(int i=0;i<m;++i){
            B[temp[i].second][i]=temp[i].first;
        }
    
        
        for(int i=0;i<n;++i){
            vector<int>v;
            for(int j=0;j<m;++j){
                 v.push_back(A[i][j]);
            }
            
            for(int j=0;j<m;++j){
                if(B[i][j]){
                    int index=-1;
                    for(int k=0;k<m;++k){
                        if(v[k]==B[i][j]){
                            index=k;
                            break;
                        }
                    }
                     
                    
                    v.erase(v.begin()+index);
                    
                }
            }
            int k=0;
            for(int j=0;j<m;++j){
                if(B[i][j]==0){
                    B[i][j]=v[k];
                    k++;
                }
            }
        }
        
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cout<<B[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
}
