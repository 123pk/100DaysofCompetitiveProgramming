/*
Platform :- Codeforces
Contest :- Codeforces Round 712
Problem :- B - Flip the bits
Hint:- the points( index) where strings are not equal should also be the points where ( no_of_ones = no_of_zeros )
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s1,s2;
        cin>>s1>>s2;
        
        if(s1==s2){
            cout<<"YES"<<endl;
        }
        else{
            int c1=count(s1.begin(),s1.end(),'0');
            int c2=count(s2.begin(),s2.end(),'0');
            
            if(c1!=c2)cout<<"NO"<<endl;
            else{
                
                int d1=n-c1;
                set<int>temp;
                int f=0;
                int o=0,z=0;
              // finding all the points where no_of_zeros = no_of_ones
                for(int i=0;i<n;++i){
                    if(s1[i]=='1')o++;
                    else z++;
                    
                    if(o==z)temp.insert(i);
                }
                
                int l=0;
               
              //here we need to be careful as we will check first for index where strings not match and then we will check for index where string mach
              // because once we will filp the bits the string part that was matching will not match and we will do the same alternatively 
                for(int i=n-1;i>=0;--i){
                    
                    if(l){
                        if(s1[i]==s2[i]){
                            if(temp.find(i)==temp.end()){
                                f=1;break;
                            }
                            
                            l=0;
                        }
                    }
                    else{
                        if(s1[i]!=s2[i]){
                            if(temp.find(i)==temp.end()){
                                f=1;break;
                            }
                            l=1;
                        }
                    }
                }
                
                
                if(f==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
}
