/*
Platform :- Codechef
Problem :- Guess It
Contest :- Codechef Cook off march 2021
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int k=2000;
        int start=1;
        long long temp=1;
        int x;
        int g=0;
        while(k--){
            cout<<temp<<endl;
            cout.flush();
            cin>>x;
            
            if(x==1){
                g=1;
                break;
            }
            else{
                start++;
                temp=start*start;
                 
            }
        }
        if(g==0){
            cin>>x;
            cout.flush();
            continue;
        }
        cout.flush();
    }
}
