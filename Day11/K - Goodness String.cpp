/*
Platform :- Coding competition with google
Problem :- K - Goodness String
Contest :- Kickstart round A 2021
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        int n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        
        int c=0;
        for(int i=0;i<(s.size()/2);++i){
            if(s[i]!=(s[s.size()-1-i]))c++;
        }
        
        int ans=abs(c-k);
        
        cout<<ans<<endl;
        
    }
}
