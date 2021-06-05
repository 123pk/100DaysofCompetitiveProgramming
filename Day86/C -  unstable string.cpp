/*
Platform :- Codeoforces 
Contest :- Educational Round 110
Problem :- C -  unstable string
Approcah :- find all the good substring and add ( tot + = (n*(n-1))/2 ) to total count where 'n' is the length of that good substring 
            A substring is good if it can be trasformed into '10101...' or '01010..'
            * At the end take care of common substrings that are been added.
            Those substrings are only of '?' so we need to find the contigous substring of '?' and substract ' m*(m-1)/2' where m=' length of that substring of '?''
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long ,int>P,pair<long long,int>Q){
    
    return P.first>Q.first;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
       string s;
       cin>>s;
       
       int n=s.size();
       
       queue<char>P;
       long long ans=n;
       long long d=0;
       string z="";
       char check='#';
       for(int i=0;i<n;++i){
           if(i==0){
               d++;
              // P.push(s[i]);
               if(s[i]!='?')check=s[i];
               if(s[i]=='?')z+=s[i];
           }
           else{
                
               //case 1 if we have prefix filled with '?'
               if(z.size()){
                   if(s[i]=='?'){
                       d++;
                       z+=s[i];
                       if(check!='#'){
                      if(check=='0')check='1';
                      else check='0';
                       }
                   }
                   else{
                       if(check=='#'){
                           d++;
                          check=s[i];
                           z="";
                        //   cout<<" * ";
                       }
                       else{
                           if(check==s[i]){
                               long long temp=(d*(d-1))/2;
                               ans+=temp;
                               d=1;
                               d+=z.size();
                                
                                //removing the part that is added twice
                                temp=(z.size());
                               temp*=(temp-1);
                               temp/=2;
                               ans-=temp;
                                       
                               z="";
                               check=s[i];
                           }
                           else{
                               d++;
                               check=s[i];
                               z="";
                           }
                       }
                       
                   }
               }
               else{
                   if(s[i]=='?'){
                       if(s[i-1]=='0')check='1';
                       else check='0';
                       d++;
                       z+=s[i];
                   }
                   else{
                       if(s[i]==s[i-1]){
                           long long temp=(d*(d-1))/2;
                           ans+=temp;
                           d=1;
                           check=s[i];
                       }
                       else{
                           d++;
                           check=s[i];
                       }
                   }
               }
               
               if(i==n-1)ans+=((d*(d-1))/2);
           }
          //cout<<(ans)<<" "<<d<<" "<<check<<" "<<z.size()<<endl;
       }
       
       cout<<ans<<endl;
        
    }
}
