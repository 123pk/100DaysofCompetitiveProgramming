/*
Platform :- Codechef
Contest :- April lunchtime
Problem :- Chef in heaven
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int l;
        cin>>l;
        
        string s;
        cin>>s;
        
        int c=0,f=0;
        for(int i=0;i<l;++i){
            if(s[i]=='1')c++;
            else c--;
            
            if(c>=0){f=1;break;}
        }
        
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
