/*
Platform :- Codeforces 
Contest :- Codeforces Round 715 Div 2
Problem :- B - TMT Document
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
         
         map<char,int>P;
         for(auto x:s){
             P[x]++;
         }
         
         int temp=P['M'];
         int temp2=P['T'];
         temp*=2;
         
         if((temp!=temp2) ||n%3){
             cout<<"NO"<<endl;
         }
         else{
             vector<int>P,Q,R;
             int f=0;
             temp/=2;
             int z=temp;
             for(int i=0;i<s.size();++i){
                 if(s[i]=='T'){
                     P.push_back(i);
                     z--;   
                 }
                 if(z==0)break;
             }
             
             z=temp;
             for(int i=n-1;i>=0;--i){
                 if(s[i]=='T'){
                     R.push_back(i);
                     z--;
                 }
                 if(z==0)break;
             }
             reverse(R.begin(),R.end());
             for(int i=0;i<n;++i){
                 if(s[i]=='M')Q.push_back(i);
             }
             
             if(P.size() != Q.size()  || P.size()!=R.size()){
                 cout<<"NO"<<endl;
                 continue;
             }
             
             for(int i=0;i<temp;++i){
                 int j=P[i];
                 int k=Q[i];
                 int r=R[i];
                 
                 if(j<k && k<r)continue;
                 f=1;break;
             }
             
             if(f)cout<<"NO"<<endl;
             else cout<<"YES"<<endl;
         }
    }
}
