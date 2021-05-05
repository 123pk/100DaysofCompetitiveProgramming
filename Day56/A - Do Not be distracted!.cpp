/*
Platform :- Codeforces 
Contest :- Codeforces Round #719 Div 3
Problem :- A - Do Not be distracted!
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
        
        int f=0;
        char ch=s[0];
        set<char>P;
        int c=0;
        for(int i=0;i<n;++i){
            if(s[i]==ch){
                c++;
                P.insert(ch);
            }
            else{
                if(P.find(s[i])!=P.end()){
                    f=1;break;
                }
                ch=s[i];
                P.insert(ch);
                c=1;
            }
        }
        
        if(f)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
