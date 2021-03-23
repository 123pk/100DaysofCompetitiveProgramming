/*
Platform :- Atcoder
Problem :- B - Round Down
Contest :- Atcoder Beginner Contest 196
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.size();++i){
        if(s[i]=='.')break;
        cout<<s[i];
    }
    cout<<endl;
}
