/*
Platform :- Codeforces 
contest :- Codeforces Round #719 Div 3
Problem :- C - Not Adjacent Matrix
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int siz=n*n;
        if(n==2){cout<<-1<<endl;continue;}
        
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        vector<int>temp(siz);
         
        
    
            int d=1,c=2,k=0;
            for(int i=0;i<(temp.size());++i){
                if(k){
                    temp[i]=c;
                    c+=2;
                }
                else{
                    temp[i]=d;
                   d+=2;
                    if((d>siz)){
                        k=1;
                    }
                }
            }
        
        
        for(int i=0;i<temp.size();++i){
            cout<<temp[i]<<" ";
            if((i+1)%n==0)cout<<endl;
        }
    }
}
