/*
Platform :- Coding competition with google
Contest :- Google Kickstart Round B 2021
Problem :- Increasing Substring
Hint:- we will maintain a variable to count consecutive elements in increasing order till current element.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int c=0;
        for(int i=0;i<s.size();++i){
            if(i==0){
                c++;
                cout<<c<<" ";
            }
            else{
                if(i==s.size()-1){
                    if(s[i]>s[i-1]){
                        c++;
                        cout<<c<<" ";
                    }
                    else{
                        c=1;
                        cout<<c<<" ";
                    }
                }
                else{
                    if(s[i]>s[i-1]){
                        c++;
                        cout<<c<<" ";
                    }
                    else{
                        c=1;
                        cout<<c<<" ";
                    }
                }
            }
        }
        cout<<endl;
        
    }
}
