/*
Platform :- Codeforces 
Contest :- Codeforces LATOKEN Round 1 (Div. 1 + Div. 2)
Problem :- A - Colour The flag
Approach :- Try to color flag in WRWRW.. pattern if at any point it is not possible try to form RWRWR.. pattern if both of the pattern is not possible print ("NO") 
            else print("YES") and pattern that satisfied condition.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        char ch[n][m];
        char ch2[n][m];
        char ch3[n][m];
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>ch[i][j];
                ch2[i][j]=ch[i][j];
                ch3[i][j]=ch[i][j];
            }
        }
        
        //first we will try to convert it to RWRW
        
        if(m%2==0){
            
            int f=0;
            
            for(int i=0;i<n;++i){
                if(i%2){
                   char c='W';
                   for(int j=0;j<m;++j){
                       if(ch2[i][j]!='.'){
                           if(ch2[i][j]!=c){
                               f=1;break;
                           }
                           else {
                               if(c=='R')c='W';
                               else c='R';
                           }
                       }
                       else{
                           ch2[i][j]=c;
                           if(c=='R')c='W';
                           else c='R';
                       }
                   }
                
                }
                else{
                    char c='R';
                    for(int j=0;j<m;++j){
                       if(ch2[i][j]!='.'){
                           if(ch2[i][j]!=c){
                               f=1;break;
                           }
                           else{
                               if(c=='R')c='W';
                               else c='R';
                           }
                       }
                       else{
                           ch2[i][j]=c;
                           if(c=='R')c='W';
                           else c='R';
                       }
                   }
                }
                
                if(f)break;
            }
            
            
            if(f==0)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<n;++i){
                    for(int j=0;j<m;++j){
                        cout<<ch2[i][j];
                    }
                    cout<<endl;
                }
            }
            else{
                
                // now we will convert to WRW 
                int f1=0;
            
            for(int i=0;i<n;++i){
                if(i%2){
                   char c='R';
                   for(int j=0;j<m;++j){
                       if(ch3[i][j]!='.'){
                           if(ch3[i][j]!=c){
                               f1=1;break;
                           }
                           else {
                               if(c=='R')c='W';
                                else c='R';
                           }
                       }
                       else{
                           ch3[i][j]=c;
                           if(c=='R')c='W';
                           else c='R';
                       }
                   }
                
                }
                else{
                    char c='W';
                    for(int j=0;j<m;++j){
                       if(ch3[i][j]!='.'){
                           if(ch3[i][j]!=c){
                               f1=1;break;
                           }
                           else{
                               if(c=='R')c='W';
                               else c='R';
                           }
                       }
                       else{
                           ch3[i][j]=c;
                           if(c=='R')c='W';
                           else c='R';
                       }
                   }
                }
                
                if(f1)break;
            }
            
            if(f1)cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                for(int i=0;i<n;++i){
                    for(int j=0;j<m;++j){
                        cout<<ch3[i][j];
                    }
                    cout<<endl;
                }
            }
            
            }
            
            
        }
        else{
            
            // we will try convert it to RWRW
            char c='R';
            int f=0;
            for(int i=0;i<n;++i){
                for(int j=0;j<m;++j){
                    
                    if(ch2[i][j]!='.'){
                       if(ch2[i][j]!=c){
                           f=1;
                           break;
                       }
                       else{
                           if(c=='R')c='W';
                        else c='R';
                       }
                    }
                    else{
                        ch2[i][j]=c;
                        if(c=='R')c='W';
                        else c='R';
                    }
                }
                if(f)break;
            }
            
            if(f==0){
                cout<<"YES"<<endl;
                for(int i=0;i<n;++i){
                    for(int j=0;j<m;++j){
                        cout<<ch2[i][j];
                    }
                    cout<<endl;
                }
            }
            else{
                // we will try WRWR
                c='W';
                f=0;
            for(int i=0;i<n;++i){
                for(int j=0;j<m;++j){
                    
                    if(ch3[i][j]!='.'){
                       if(ch3[i][j]!=c){
                           f=1;
                           break;
                       }
                       else {
                           if(c=='R')c='W';
                        else c='R';
                       }
                    }
                    else{
                        ch3[i][j]=c;
                        if(c=='R')c='W';
                        else c='R';
                    }
                }
                if(f)break;
            }
            
            if(f)cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                for(int i=0;i<n;++i){
                    for(int j=0;j<m;++j){
                        cout<<ch3[i][j];
                    }
                    cout<<endl;
                }
            }
            
            
            }
            
        }
    }
}
