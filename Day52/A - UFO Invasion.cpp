/*
Platform :- Atcoder
Problem :- A - UFO Invasion
Contest :- Zone energy Programming contest
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    string temp="ZONe";
    int d=0;
    for(int i=0;i<s.size();++i){
        if(s[i]==temp[0]){
            int f=0;
            for(int j=0;j<temp.size();++j){
                if(s[i+j]!=temp[j]){
                    f=1;break;
                }
            }
            if(f==0)d++;
        }
    }
    cout<<d<<endl;
}
