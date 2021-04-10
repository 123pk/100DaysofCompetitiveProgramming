/*
Platform :- Codeforces 
Contest :- Codeforces Round 713 Div 3
Problem :- B - Almost Rectangle
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         
         char ch[n][n];
         vector<pair<int,int>>P;
         for(int i=0;i<n;++i){
             for(int j=0;j<n;++j){
                cin>>ch[i][j];
                 if(ch[i][j]=='*'){
                     P.push_back({i,j});
                 }        
             }
         }
         
         if((P[0].first!=P[1].first) && (P[0].second!=P[1].second)){
         ch[P[0].first][P[1].second]='*';
         ch[P[1].first][P[0].second]='*';
         }
         else{
             if((P[0].first==P[1].first)){
                 if(P[0].first==0){
                     ch[1][P[0].second]='*';
                     ch[1][P[1].second]='*';
                 }
                 else{
                     ch[0][P[0].second]='*';
                     ch[0][P[1].second]='*';
                 }
             }
             else{
                 if(P[0].second==0){
                     ch[P[0].first][1]='*';
                     ch[P[1].first][1]='*';
                 }
                 else{
                     ch[P[0].first][0]='*';
                     ch[P[1].first][0]='*';
                 }
             }
         }
         //P.push_back({P[1].first,P[0].second});
         
        
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cout<<ch[i][j];
            }
            cout<<endl;
        }
         
    }
}
