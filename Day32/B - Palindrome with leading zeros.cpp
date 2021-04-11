/*
Platfrom :- Atcoder
Problem :- B - Palindrome with leading zeros
Contest :- Atcoder Beginner contest 198
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int n=s.size();
    int f=0;
    for(int i=0;i<(n/2);++i){
        if(s[i]!=s[n-1-i]){
            f=1;break;
        }
    }
    
    if(f==0){
        cout<<"Yes"<<endl;
    }
    else{
        int c=0;
        for(int i=n-1;i>=0;--i){
            if(s[i]=='0'){
                c++;
            }
            else break;
        }
        
        if(c==0){
            cout<<"No"<<endl;
        }
        else{
            string temp;
            for(int i=1;i<=c;++i)temp+='0';
            temp+=s;
            int g=0;
            int m=temp.size();
            for(int i=0;i<(m/2);++i){
               if(temp[i]!=temp[m-1-i]){
                   g=1;break;
                 }
             }
             
             if(g)cout<<"No"<<endl;
             else cout<<"Yes"<<endl;
        }
    }
}
