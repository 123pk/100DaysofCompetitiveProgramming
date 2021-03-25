/*
Platform :- Codeforces
Problem :- B - Partial Replacement
Contest :- Codeforces Round #710 Div 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        string s;
        int ans=0;
        cin>>s;
        
        int start=-1,end=-1;
        for(int i=0;i<s.size();++i){
            if(s[i]=='*'){
                s[i]='x';
                ans++;
                start=i;
                end=i;
                break;
            }
        }
        
        for(int i=n-1;i>=0;--i){
            if(s[i]=='*'){
                end=i;
                if(start<end)ans++;
                break;
            }
        }
        
        if(start==end){
            cout<<1<<endl;
        }
        else{
              
            vector<int>v;
            v.push_back(start+1);
            for(int i=start+1;i<end;++i){
               if(s[i]=='*'){
                   v.push_back(i+1);
               }    
            }
            v.push_back(end+1);
             
            
            int prev=start+1;
            for(int i=1;i<v.size();++i){
                int temp=v[i]-prev;
                //cout<<temp<<" "<<k<<endl;
                if(temp>k){
                    
                    prev=v[i-1];
                    ans++;
                }
                else{
                    if(i!=v.size()-1){
                        if((v[i+1]-prev)>k){
                            ans++;
                            prev=v[i];
                        }
                    }
                }
            }
            
            cout<<ans<<endl;
        }
    }
}
