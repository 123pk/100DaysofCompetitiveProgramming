/*
Platform :- Codeforces
Problem :- Domino and Windowsill
Contest :- Codeforces Educational round 106
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k1,k2;
        cin>>n>>k1>>k2;
        
        int w,b;
        cin>>w>>b;
        
        int A[2][n];
        for(int i=0;i<2;++i){
            if(i==0){
                for(int j=0;j<n;++j){
                    if(j<k1){
                        A[i][j]=1;
                    }
                    else A[i][j]=0;
                }
            }
            else{
               for(int j=0;j<n;++j){
                    if(j<k2){
                        A[i][j]=1;
                    }
                    else A[i][j]=0;
                } 
            }
        }
        
        
        
        int f=0;
        int c1=0,c2=0;
        
        for(int i=0;i<n;++i){
                if(A[0][i]==A[1][i]  && A[0][i]!=-1){
                    if(A[0][i]==1){
                        c1++;
                    }
                    else c2++;
                    A[0][i]=-1;
                    A[1][i]=-1;
                }
            }
        
        
        for(int i=1;i<n;++i){
            if(A[0][i]==A[0][i-1] && A[1][i]!=-1){
                if(A[0][i]==1){
                    c1++;
                }
                else{
                    c2++;
                } 
                A[0][i]=-1;
                A[0][i-1]=-1;
                i++;
            }
        }
        
        for(int i=1;i<n;++i){
            if(A[1][i]==A[1][i-1] && A[1][i]!=-1){
                if(A[1][i]==1)c1++;
                else c2++;
                
                A[1][i]=-1;
                A[1][i-1]=-1;
                i++;
                
            }
        }
        
         
        //cout<<c1<<" "<<c2<<endl;
        if((c1>=w) && c2>=b){
             cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
