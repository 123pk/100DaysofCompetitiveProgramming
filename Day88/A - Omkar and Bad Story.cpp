/*
Platform :- Codeforces 
Contest :- Codeforces Round 724
Problem :- A- Omkar and Bad Story
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<long long> A;
        set<long long>P;
        int f=0;
        for(int i=0;i<n;++i){
            long long x;
            cin>>x;
            A.push_back(x);
            P.insert(x);
            if(A[i]<0)f=1;
        }
        
        if(f)cout<<"NO"<<endl;
        else{
            sort(A.begin(),A.end());
          
            
            vector<long long>temp;
            for(int i=0;i<n;++i){
                for(int j=i+1;j<n;++j){
                    long long z=abs(A[i]-A[j]);
                    if(P.find(z)==P.end()){
                        temp.push_back(z);
                        A.push_back(z);
                        P.insert(z);
                    }
                }
            }
            
            
            if(temp.size()==0){
                cout<<"YES"<<endl;
                cout<<A.size()<<endl;
                
                for(auto x:A)cout<<x<<" ";
                cout<<endl;
            }
            else{
                while(1){
                    int g=0;
                    vector<long long>temp2;
                    for(int i=0;i<temp.size();++i){
                        for(int j=0;j<A.size();++j){
                            if(temp[i]==A[j])continue;
                            long long z=abs(temp[i]-A[j]);
                            if(P.find(z)==P.end()){
                                g=1;
                                temp2.push_back(z);
                                A.push_back(z);
                                P.insert(z);
                            }
                        }
                    }
                    temp=temp2;
                    temp2.clear();
                    
                    if(g==0)break;
                }
                cout<<"YES"<<endl;
                cout<<A.size()<<endl;
                
                for(auto x:A)cout<<x<<" ";
                cout<<endl;
                
            }
        }
    }
}
