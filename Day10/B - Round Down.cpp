/*
Platform :- Leetcode
Problem :- B - Round Down
Contest :- Bi Weekly contest 48
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
