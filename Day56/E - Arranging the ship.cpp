/*
Platform :- Codeforces 
contest :- Codeforces Round #719 Div 3
Problem :- E - Arranging the ship
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        char A[n];
        int d=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]=='*')d++;
        }
        
        if(d<=1 || d==n){
            cout<<0<<endl;
        }
        else{
            long long tot=0;
            int index=INT_MAX;
            
            vector<pair<char,int>>P;
            int c=0;
            char ch=A[0];
            for(int i=0;i<n;++i){
                if(A[i]==ch){
                    c++;
                    if(i==n-1){
                        P.push_back({A[i],c});
                    }
                }
                else{
                    P.push_back({ch,c});
                    ch=A[i];
                    c=1;
                    if(i==n-1){
                        P.push_back({ch,c});
                    }
                }
            }
            
            
            
            int tot_z=0,tot_o=0;
            for(int i=0;i<P.size();++i){
               // cout<<P[i].first<<" "<<P[i].second<<" ";
                if(P[i].first=='.'){
                    
                    tot_o=P[i].second;
                    
                    int temp=d-tot_z;
                    
                    if(tot_z>temp){
                        index=i;
                        break;
                    }
                    //cout<<(tot_z)<<" "<<tot<<" "<<tot_o<<endl;
                    tot+=(tot_o*tot_z);
                    
                }
                else tot_z+=P[i].second;
            }
            //cout<<endl;
            
            //reverse(P.begin(),P.end());
            tot_z=0,tot_o=0;
            for(int i=P.size()-1;i>=index;--i){
                if(P[i].first=='.'){
                     tot_o=P[i].second;
                     //cout<<(tot_z)<<" "<<tot<<" "<<tot_o<<endl;
                    tot+=(tot_o*tot_z);
                    
                }
                else tot_z+=P[i].second;
                
            }
            
            cout<<tot<<endl;
        }
        
        
    }
}
