/*
Platform :- Codeforces
Contest :- Educational round 92
Problem :- C - Good string
Approach :- since there are only 10 digits ( 0 to 9) are present we can bruteforce all the combination and we will find the max even length if 
            we have if we have different digits , otherwise we have maximum count of a digit.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
       string s;
       cin>>s;
       
       int ans=0;
       for(char ch='0';ch<='9';++ch){
           for(char sh='0';sh<='9';++sh){
               char a=ch,b=sh;
               int c=0;
               for(auto x:s){
                   if(x==a){
                       c++;
                       swap(a,b);
                   }
               }
               
               if(a==b)ans=max(ans,c);
               else ans=max(ans,c&~1);
           }
       }
       
       cout<<(s.size()-ans)<<endl;
    }
}
