/*
Platform :- Coding Competition with google
Problem :- Standing Ovations
Contest :- Codejam 2015 Qualification round
Hint :- Bruteforce and take care of standing people at each index
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z= 1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int ans=0;
        int temp=0;
        for(int i=0;i<(n+1);++i){
            if(s[i]!='0'){
                if(temp<i){
                    ans+=abs(temp-i);
                    temp+=abs(temp-i);
                }
                temp+=s[i]-'0';
            }
        }
        
        cout<<ans<<endl;
    }
}
