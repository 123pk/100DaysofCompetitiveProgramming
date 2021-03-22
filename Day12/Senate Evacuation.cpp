/*
Platform :- Coding Competition with google
Problem :- Senate Evacuation
Contest :- CodeJam 2016 Round 1C
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        int n;
        cin>>n;
        
        long long A[n];
        long long tot=0;
        char ch='A';
        priority_queue<pair<int,char>>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot+=A[i];
            P.push({A[i],ch});
            ch+=1;
        }
        
        while(tot>0){
            pair<int,char> temp=P.top();
            P.pop();
            
            if(!P.empty()){
            pair<int,char>temp2=P.top();
            P.pop();
             
            if((temp.first>=2)){
            int zz=tot-2;
            if((zz<(temp2.first*2))){
                cout<<temp.second<<temp2.second<<" ";
                tot-=2;
                P.push({temp.first-1,temp.second});
                P.push({temp2.first-1,temp2.second});
            }
            else{
                cout<<temp.second<<temp.second<<" ";
                tot-=2;
                P.push({temp2.first,temp2.second});
                
                if((temp.first-2)){
                    P.push({temp.first-2,temp.second});
                }
            }
            
            }
            else{
                if(tot==3){
                    cout<<temp.second<<" ";
                    tot--;
                    if(temp.first-1){
                    P.push({temp.first-1,temp.second});
                    }
                    P.push({temp2.first,temp2.second});
                }
                else{
                    cout<<temp.second<<temp2.second<<" ";
                    
                    tot-=2;
                    if((temp.first-1)){
                        P.push({temp.first-1,temp.second});
                    }
                    
                    if((temp2.first-1)){
                        P.push({temp2.first-1,temp.second});
                    }
                }
            }
            
            }
            else{
                
                if(temp.first<2){
                    cout<<temp.second<<" ";
                    tot-=temp.first;
                }
                else{
                    cout<<temp.second<<temp.second<<" ";
                    tot-=2;
                    if((temp.first-2)){
                        P.push({temp.first-2,temp.second});
                    }
                }
            }
            
             
        }
        
         
        cout<<endl;
        
        
        
    }
}
