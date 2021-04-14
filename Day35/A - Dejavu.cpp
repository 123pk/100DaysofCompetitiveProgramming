/*
Platform :- Codeforces 
Contest :- Codeforces Round #712 Div 2
Problem :- A - Dejavu
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        string temp=s;
        temp+='a';
        string temp2="a";
        temp2+=s;
        
        int f=0,g=0;
        for(int i=0;i<(temp.size()/2);++i){
            if(temp[i]!=temp[temp.size()-1-i]){
                f=1;break;
            }
        }
        
        for(int i=0;i<(temp2.size()/2);++i){
            if(temp2[i]!=temp2[temp2.size()-1-i]){
                g=1;break;
            }
        }
        
        if(f||g){
            cout<<"YES"<<endl;
            if(f){
                
                cout<<temp<<endl;
            }
            else{
                cout<<temp2<<endl;
            }
        }
        else cout<<"NO"<<endl;
        
    }
}
