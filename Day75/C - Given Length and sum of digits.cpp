/*
Platform :- Codeforces 
Contest :- Codeforces Round #277.5 Div 2
Problem :- C - Given Length and sum of digits...
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,s;
    cin>>m>>s;
    
    if(s==0){
        if(m>1)cout<<"-1 -1"<<endl;
        else cout<<"0 0"<<endl;
    }
    else{
        if(s>(m*9)){
          cout<<"-1 -1"<<endl;
        }
        else{
            string temp="";
            int tot=0;
            for(int i=1;i<=m;++i){
                temp+="9";
                tot+=9;
            }
            
            int i=0;
            while(tot>s){
                int x=tot-s;
                if(x>=8){
                    if(i==0){
                        temp[i]='1';
                        tot-=8;
                    }
                    else{
                        if(x>=9){
                            temp[i]='0';
                            tot-=9;
                        }
                        else{
                            temp[i]='1';
                            tot-=8;
                        }
                    }
                }
                else{
                    string l=to_string(9-x);
                    temp[i]=l[0];
                    tot-=(x);
                }i++;
            }
            
           // cout<<temp<<" ";
            //reverse(temp.begin(),temp.end());
             string z="";
             for(int i=1;i<=m;++i)z+='0';
             
             tot=0;
             i=0;
             while(tot<s){
                 int x=s-tot;
                 if(x>=9){
                     tot+=9;
                     z[i]='9';
                 }
                 else{
                     string l=to_string(x);
                     z[i]=l[0];
                     tot+=x;
                 }
                 i++;
             }
             
            cout<<temp<<" "<<z<<endl;
        }
    }
}
