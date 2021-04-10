/*
Platform :- Codeforces
Problem :- A - B palindrome 
Contest :- Codeforces Round 713 Div 3
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        string s;
        cin>>s;
        
        int c=0;
        if(n%2)c++;
        if(m%2)c++;
        
        if(c>1)cout<<"-1"<<endl;
        else{
            int d=count(s.begin(),s.end(),'?');
            
            if(d==(n+m)){
                 if(d%2){
                     string temp;
                     if(n%2){
                         for(int i=1;i<=(n/2);++i)temp+='0';
                         for(int i=1;i<=(m/2);++i)temp+='1';
                         string z=temp;
                         temp+='0';
                          reverse(z.begin(),z.end());
                         temp+=z;
                         cout<<temp<<endl;
                     }
                     else{
                         for(int i=1;i<=(m/2);++i)temp+='1';
                         for(int i=1;i<=(n/2);++i)temp+='0';
                         string z=temp;
                         temp+='1';
                         reverse(z.begin(),z.end());
                         temp+=z;
                         cout<<temp<<endl;
                     }
                 }
                 else{
                     
                     string temp;
                     for(int i=1;i<=(n/2);++i)temp+='0';
                     for(int i=1;i<=m/2;++i)temp+='1';
                     string z=temp;
                      reverse(z.begin(),z.end());
                      temp+=z;
                      cout<<temp<<endl;
                     
                 }
            }
            else{
                
                int f=0;
                
                if((m+n)%2){
                    int a=n,b=m;
                     if(b%2){
                         if(s[(m+n)/2]=='0'){
                             cout<<"-1"<<endl;
                             continue;
                         }
                         else{
                             
                             if(s[(m+n)/2]=='?'){
                                 s[(n+m)/2]='1';
                             }
                             b--;
                         }
                     }
                     else{
                         if(s[(m+n)/2]=='1'){
                             cout<<"-1"<<endl;
                             continue;
                         }
                         else{
                             if(s[(m+n)/2]=='?'){
                                 s[(n+m)/2]='0';
                             }
                             a--;
                         }
                     }
                             
                             int sz=s.size();
                             for(int i=0;i<sz/2;++i){
                                 if(s[i]=='?'){
                                     if(s[sz-1-i]!='?'){
                                         if(s[sz-1-i]=='1'){
                                             if(b>1){
                                                 s[i]='1';
                                                 b-=2;
                                             }
                                             else{
                                                 f=1;break;
                                             }
                                         }
                                         else{
                                             if(a>1){
                                                 a-=2;
                                                 s[i]='0';
                                             }
                                             else{
                                                 f=1;break;
                                             }
                                         }
                                     }
                                 }
                                 else{
                                     if(s[sz-1-i]=='?'){
                                         if(s[i]=='1'){
                                             if(b>1){
                                                 b-=2;
                                                 s[sz-1-i]='1';
                                             }
                                             else{
                                                 f=1;break;
                                             }
                                         }
                                         else{
                                             if(a>1){
                                                 a-=2;
                                                 s[sz-1-i]='0';
                                             }
                                             else{
                                                 f=1;break;
                                             }
                                         }
                                     }
                                     else{
                                         if(s[i]!=s[sz-1-i]){
                                             f=1;break;
                                         }
                                         else{
                                             if(s[i]=='0'){
                                                 if(a>1){
                                                     a-=2;
                                                 }
                                                 else{
                                                     f=1;break;
                                                 }
                                             }
                                             else{
                                                 if(b>1){
                                                     b-=2;
                                                 }
                                                 else{
                                                     f=1;break;
                                                 }
                                             }
                                         }
                                     }
                                 }
                             }
                             
                             if(f)cout<<"-1"<<endl;
                             else{
                                 for(int i=0;i<(sz/2);++i){
                                     if(s[i]=='?'){
                                         if(s[sz-1-i]=='?'){
                                             if(b>1){
                                                 s[i]='1';
                                                 s[sz-1-i]='1';
                                                 b-=2;
                                             }
                                             else{
                                                 if(a>1){
                                                     a-=2;
                                                     s[i]='0';
                                                     s[sz-1-i]='0';
                                                 }
                                                 else{
                                                     f=1;break;
                                                 }
                                             }
                                         }
                                     }
                                 }
                                 
                                 if(f || a>0 || b>0)cout<<"-1"<<endl;
                                 else{
                                     cout<<s<<endl;
                                 }
                             }
                     
                }
                else{
                    int a=n,b=m;
                     int sz=s.size();
                             for(int i=0;i<sz/2;++i){
                                 if(s[i]=='?'){
                                     if(s[sz-1-i]!='?'){
                                         if(s[sz-1-i]=='1'){
                                             if(b>1){
                                                 s[i]='1';
                                                 b-=2;
                                             }
                                             else{
                                                 f=1;break;
                                             }
                                         }
                                         else{
                                             if(a>1){
                                                 a-=2;
                                                 s[i]='0';
                                             }
                                             else{
                                                 f=1;break;
                                             }
                                         }
                                     }
                                 }
                                 else{
                                     if(s[sz-1-i]=='?'){
                                         if(s[i]=='1'){
                                             if(b>1){
                                                 b-=2;
                                                 s[sz-1-i]='1';
                                             }
                                             else{
                                                 f=1;break;
                                             }
                                         }
                                         else{
                                             if(a>1){
                                                 a-=2;
                                                 s[sz-1-i]='0';
                                             }
                                             else{
                                                 f=1;break;
                                             }
                                         }
                                     }
                                     else{
                                         if(s[i]!=s[sz-1-i]){
                                             f=1;break;
                                         }
                                         else{
                                             if(s[i]=='0'){
                                                 if(a>1){
                                                     a-=2;
                                                 }
                                                 else{
                                                     f=1;break;
                                                 }
                                             }
                                             else{
                                                 if(b>1){
                                                     b-=2;
                                                 }
                                                 else{
                                                     f=1;break;
                                                 }
                                             }
                                         }
                                     }
                                 }
                             }
                             
                             if(f)cout<<"-1"<<endl;
                             else{
                                 for(int i=0;i<(sz/2);++i){
                                     if(s[i]=='?'){
                                         if(s[sz-1-i]=='?'){
                                             if(b>1){
                                                 s[i]='1';
                                                 s[sz-1-i]='1';
                                                 b-=2;
                                             }
                                             else{
                                                 if(a>1){
                                                     a-=2;
                                                     s[i]='0';
                                                     s[sz-1-i]='0';
                                                 }
                                                 else{
                                                     f=1;break;
                                                 }
                                             }
                                         }
                                     }
                                 }
                                 
                                 if(f|| a>0 || b>0)cout<<"-1"<<endl;
                                 else{
                                     cout<<s<<endl;
                                 }
                             }
                    }
            }
        }
    }
}
