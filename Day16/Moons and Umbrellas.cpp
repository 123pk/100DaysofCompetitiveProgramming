/*
Platform :- Coding competition with google
Problem :- Moons and Umbrellas
Contest :- Google Codejam Practise Round 2021
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        int x,y;
        cin>>x>>y;
        
        string s;
        cin>>s;
        
        long long ans=0;
        
        if(s.size()==1){
            cout<<0<<endl;
            continue;
        }
        
        for(int i=0;i<s.size();++i){
            if(i==0||i==s.size()-1){
                if(i==0){
                    if(s[i]=='?'){
                        char ch='0';
                       for(int j=i+1;j<s.size();++j){
                           if(s[j]!='?'){
                               ch=s[j];
                               break;
                           }
                       }
                       
                       if(ch=='0'){
                           s[i]='C';
                       }
                       else{
                           s[i]=ch;
                       }
                    }
                }
                else{
                    if(s[i]=='?'){
                       char ch='0';
                       for(int j=i-1;j>=0;--j){
                           if(s[j]!='?'){
                               ch=s[i];
                               break;
                           }
                       }
                       
                       if(ch=='0'){
                           s[i]='C';
                       }
                       else{
                           s[i]=ch;
                       } 
                    }
                    else{
                        if(s[i]=='C'){
                            if(s[i-1]=='J'){
                                ans+=y;
                            }
                        }
                        else{
                            if(s[i-1]=='C' && s[i]=='J')ans+=x;
                        }
                    }
                }
            }
            else{
                if(s[i]=='?'){
                    
                 char ch='0';
                 for(int j=i+1;j<s.size();++j){
                     if(s[j]!='?'){
                         ch=s[j];
                         break;
                     }
                 }
                 
                 if(s[i-1]==ch ||ch=='0'){
                     s[i]=ch;
                 }
                 else{
                     if(s[i-1]=='C'){
                     
                         s[i]='C';
                     }
                     else{
                     
                         s[i]='J';
                     }
                 }
                
                }
                else{
                    if(s[i]=='C'){
                        if(s[i-1]=='J'){
                            ans+=y;
                        }
                         
                    }
                    else{
                        if(s[i-1]=='C'){
                            ans+=x;
                        }
                    }
                }
            }
            //cout<<ans<<' ';
        }
        cout<<ans<<endl;
    }
}
