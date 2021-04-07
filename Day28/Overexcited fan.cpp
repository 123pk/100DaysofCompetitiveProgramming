/*
Platform :- Coding competitions with google
Contest :- Google Codejam 1C 2020
Problem :- Overexcited fan
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        int f=0;
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        
        
        int ans=INT_MAX;
        for(int i=0;i<s.size();++i){
            if(s[i]=='N'){
                y++;
                long long temp=abs(x)+abs(y);
                 
                    if(temp<=(i+1)){
                        f=1;
                    ans=min(ans,i+1);
                    }
                 
            }
            else if(s[i]=='S'){
                y--;
                long long temp=abs(x)+abs(y);
                
                    if(temp<=(i+1)){
                        f=1;
                    ans=min(ans,i+1);
                    }
                
            }
            else if(s[i]=='E'){
                x++;
                long long temp=abs(x)+abs(y);
                
                    if(temp<=(i+1)){
                        f=1;
                    ans=min(ans,i+1);
                    }
               
            }
            else{
                x--;
                long long temp=abs(x)+abs(y);
                 
                    if(temp<=(i+1)){
                        f=1;
                    ans=min(ans,i+1);
                    }
                 
            }
           // cout<<x<<" "<<y<<" "<<(i+1)<<endl;
        }
        if(f==0)cout<<"IMPOSSIBLE"<<endl;
        else cout<<ans<<endl;
    }
}
