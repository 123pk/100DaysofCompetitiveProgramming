/*
Platform :- Codeforces
Problem :- E - Restoring the permutation
Contest :- Coddeforces Round #703 Div 3
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int A[n];
        
        set<int>Z1,Z2,Z3;
        vector<int>ans1(n),ans2(n);
        priority_queue<int,vector<int>,greater<int>>P;
        priority_queue<int>Q;
        
        int mx=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(Z3.find(A[i])==Z3.end()){
                ans1[i]=A[i];
                ans2[i]=A[i];
                Z1.insert(A[i]);
                Z3.insert(A[i]);
                Z2.insert(A[i]);
                 
                 for(int j=mx+1;j<=A[i];++j){
                     P.push(j);
                     Q.push(j);
                 }
                 mx=A[i];
            }
            else{
             
                while(!P.empty()){
                    int temp=P.top();
                    P.pop();
                    if(Z1.find(temp)==Z1.end()){
                        ans1[i]=temp;
                        Z1.insert(temp);
                        break;
                    }
                    if(P.empty())break;
                }
                
                while(!Q.empty()){
                    int temp=Q.top();
                    Q.pop();
                    if(Z2.find(temp)==Z2.end()){
                        ans2[i]=temp;
                        Z2.insert(temp);
                        break;
                    }
                    
                    
                    if(Q.empty())break;
                }
            }
            
        }
        
        
         
        
        for(auto x:ans1)cout<<x<<" ";
        cout<<endl;
        
        for(auto x:ans2)cout<<x<<" ";
        cout<<endl;
    }
}
