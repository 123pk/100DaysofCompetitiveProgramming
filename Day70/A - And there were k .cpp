/*
Platform :- Codeforces 
Contest :- Codeforces round #721 
Problem :- A - and there were k
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        if(n==1)cout<<0<<endl;
        else{
            string temp=bitset<64>(n).to_string();
            int z=0;
            reverse(temp.begin(),temp.end());
            for(int i=0;i<64;++i){
                if(temp[i]=='1')z=i;
            }
            
            
            long long ans=pow(2,z)-1;
            cout<<ans<<endl;
        }
    }
}
