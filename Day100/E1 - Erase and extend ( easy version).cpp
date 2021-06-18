/*
Platform :- Codeforces
Contest :- Codeforces Round 726 # Div 2
Problem :- E1 - Erase and extend( easy version)
Approach :- find a substring from start of main string such that each character is less than  or equal to first character of array
            find all the string possible by taking prefix of substring we got from above
*/

#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n,k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    
    char ch=s[0];
    int f=0;
    string temp;
    for(int i=0;i<min(n,k);++i){
        if(ch<s[i]){
            f=1;
            break;
        }
        temp+=s[i];
    }
    
  
  //select the best string
  string temp2="";
 
  vector<string>ans;
  for(int i=0;i<temp.size();++i){
      temp2+=s[i];
       int m=temp2.size();
         int z=k/m;
         if(k%m)z++;
         string x=temp2;
         string xx=temp2;
         for(int i=1;i<z;++i)xx+=x;
         string nx="";
         for(int i=0;i<k;++i)nx+=xx[i];
         ans.push_back(nx);
  }
  sort(ans.begin(),ans.end());
  cout<<ans[0]<<"\n";
}
