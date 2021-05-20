/*
Platform :- Codeforces 
Contest :- Codeforces Round #721
Problem :- B1 Palindrome Game
Hint :- For easy version we have palindromic string so following conditions satisfy 
        i. if ( no_of_zeros %2 == 0 or no_or_zeros ==1) BOB will always win
        ii. if (no_of_zeros %2 == 1)ALICE wins
        iii. else DRAW
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         
         string s;
         cin>>s;
         
         int cnt=count(s.begin(),s.end(),'0');
         //cout<<cnt<<" "<<endl;
         int lim=10000;
         int rev=0,k=0;
         int g=0;
         g=1;
            int l=0;
            for(int i=0;i<(n/2);++i){
                if(s[i]=='0')l=1;
                if(s[i]!=s[n-1-i]){
                    l=1;
                    g=0;
                    rev=0;
                    break;
                }
            }
         int a=0,b=0;
         while(lim--){
            
            // if it is palindrome
            if(g){
                 //if odd length and middle value if '0' I will choose that 
                 if(s[n/2]=='0' && n%2){
                     s[n/2]='1';
                     if(k%2)b++;
                     else a++;
                 }
                 else{
                     int chck=0;
                     for(int i=0;i<(n/2);++i){
                          if(s[i]!=s[n-1-i]){
                            if(s[i]=='1'){
                                s[n-1-i]='1';
                            }
                            else{
                                s[i]='1';
                            }
                            
                            if(k%2)b++;
                            else a++;
                            
                            chck=1;
                            break;
                        }
                     }
                     
                     if(chck==0){
                         for(int i=0;i<n;++i){
                             if(s[i]=='0'){
                                 s[i]='1';
                                 if(k%2)b++;
                                 else a++;
                                 break;
                             }
                         }
                     }
                 }
                 rev=0;
                 cnt--;
            }
            else{
                //if someone has reversed it or not
                //cout<<cnt<<" "<<l<<endl;
                if(cnt==1 && rev==0){
                    rev=1;
                }
                else {
                    
                    for(int i=0;i<(n/2);++i){
                        if(s[i]!=s[n-1-i]){
                            if(s[i]=='1'){
                                s[n-1-i]='1';
                            }
                            else{
                                s[i]='1';
                            }
                            
                            if(k%2)b++;
                            else a++;
                            break;
                        }
                    }
                    cnt--;
                    rev=0;
                    
                }
                
            }
            
            g=1;
            int l=0;
            for(int i=0;i<(n/2);++i){
                if(s[i]=='0')l=1;
                if(s[i]!=s[n-1-i]){
                    l=1;
                    g=0;
                    break;
                }
            }
            //cout<<s<<" "<<k<<" "<<a<<" "<<b<<endl;
            k++;
            //
            if(l==0)break;
            
         }
         //cout<<endl;
         
         //cout<<a<<" "<<b<<endl;
         if(a==b){
             cout<<"DRAW"<<endl;
             continue;
         }
         if(a>b)cout<<"BOB"<<endl;
         else cout<<"ALICE"<<endl;
    }
}
