/*
Platform :- Codeforces 
Contest :- Codeforces Round 724
Problem :- B - Prinzessin der Verurteilung
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
         
         vector<int>temp(26,0);
         for(auto x:s){
             temp[x-'a']++;
         }
          map<int,char>Q;
             char ch='a';
             for(int i=1;i<=26;++i){
                 Q[i]=ch;
                 ch++;
             }
         char ans;
         int f=0;
         for(int i=0;i<26;++i){
             if(temp[i]==0){
                 ans=Q[i+1];
                 f=1;
                 break;
             }
         }
         
         if(f)cout<<ans<<endl;
         else{
             int n=s.size();
             // we will find all the subarrays as there are atmax n*(n+1)/2 values only and n=1000 
             set<string>P;
             char zzz='a';
             for(int i=1;i<=26;++i){
                 P.insert(to_string(zzz));
                 zzz++;
             }
             
             for(int i=1;i<=n;++i){
                 string temp;
                 for(int j=0;j<i;++j){
                     temp+=s[j];
                 }
                 P.insert(temp);
                 
                 for(int j=i;j<n;++j){
                     temp.erase(temp.begin());
                     temp+=s[j];
                     P.insert(temp);
                 }
             }
             
             //we will have to generate all permuatations of alphabet till size <=n
             int f=0;
            
             
             string ans="";
             for(int i=2;i<=3;++i){
                 string perm="";
                 for(int j=1;j<=i;++j)perm+='a';
                 
                 if(i==2){
                     for(int k=1;k<=26;++k){
                         perm[0]=Q[k];
                         for(int l=1;l<=26;++l){
                              perm[1]=Q[l];
                                 if(P.find(perm)==P.end()){
                                     f=1;
                                     ans=perm;
                                     break;
                                 }
                                
                         }
                         if(f)break;
                     }
                 }
                 else{
                     for(int k=1;k<=26;++k){
                         perm[0]=Q[k];
                         for(int l=1;l<=26;++l){
                             perm[1]=Q[l];
                             for(int m=1;m<=26;++m){
                                 perm[2]=Q[m];
                                 if(P.find(perm)==P.end()){
                                     f=1;
                                     ans=perm;
                                     break;
                                 }
                             }
                             if(f)break;
                         }
                         if(f)break;
                     }
                 }
                 if(f)break;
             }
             
             cout<<ans<<endl;
             
             
             
         }
    }
}
