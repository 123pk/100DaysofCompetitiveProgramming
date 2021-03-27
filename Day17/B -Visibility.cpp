/*
Platform :- Atcoder
Problem :- B - Visibility
Contest :- Atcoder Beginner contest 197
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,m,x,y;
     cin>>n>>m>>x>>y;
     
     char ch[n][m];
     for(int i=0;i<n;++i){
         for(int j=0;j<m;++j){
             cin>>ch[i][j];
         }
     }
     
     x--;
     y--;
     
     int ans=0;
     if(ch[x][y]=='.')ans++;
     //left
     for(int i=x+1;i<n;++i){
         if(ch[i][y]=='.')ans++;
         else break;
     }
     for(int i=x-1;i>=0;--i){
         if(ch[i][y]=='.')ans++;
         else break;
     }
     
     for(int i=y+1;i<m;++i){
         if(ch[x][i]=='.')ans++;
         else break;
     }
     
     for(int i=y-1;i>=0;--i){
         if(ch[x][i]=='.')ans++;
         else break;
     }
     
     cout<<ans<<endl;
}
