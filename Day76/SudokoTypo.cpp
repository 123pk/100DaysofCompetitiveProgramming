/*
Platform : - Topcoder
Problem :- Sudoko Typo
Contest :- SRM 806
Approach :- check for repeating values in 3*3 sub matrix check for value from 1 to 9 . elements thta is missing is our answer
*/

#include<bits/stdc++.h>
using namespace std;

class SudokuTypo{
  public:
   int fix(vector <int> digits){
       int ans=0;
       //checking row wise
       set<int>Q={1,2,3,4,5,6,7,8,9};
       vector<vector<int>>A(9,vector<int>(9,0));
       int f=0,d=1;
       set<int>R;
       int k=0,j=0;
       for(int i=0;i<digits.size();++i){
           if(d<=9){
               if(R.find(digits[i])!=R.end()){
                   //ans=digits[i];
                   f=1;
               }
               R.insert(digits[i]);
               A[k][j]=digits[i];
               j++;
               if(d==9){
                  // R=Q;
                  if(f)break;
                  R.clear();
                 
                  k++;
                  j=0;
                   d=1;
                   continue;
               }
               d++;
           }
            
       }
       
       for(auto x:Q){
           if(R.find(x)==R.end()){
               ans=x;
               break;
           }
       }
       
       if(f)return ans;
       
      //checking 3*3 squares
      vector<pair<int,int>>support;
       
       for(int i=0;i<9;i+=3){
           set<int>temp;
           for(int j=0;j<9;j+=3){
               for(int l=0;l<3;++l){
                   for(int m=0;m<3;++m){
                       if(temp.find(A[i+l][j+m])!=temp.end()){
                           f=1;
                       }
                       temp.insert(A[i+l][j+m]);
                   }
               }
               if(f)break;
           }
           
           if(f){
               for(auto x:Q){
                   if(temp.find(x)==temp.end()){
                       ans=x;
                       break;
                   }
               }
               break;
           }
            
       }
       
       if(f)return ans;
       
       //checing colum wise
       for(int j=0;j<9;++j){
           set<int>temp;
           for(int i=0;i<9;++i){
               if(temp.find(A[i][j])!=temp.end()){
                   f=1;
               }
               temp.insert(A[i][j]);
           }
           if(f){
               for(auto x:Q){
                   if(temp.find(x)==temp.end()){
                       ans=x;
                       break;
                   }
               }
               break;
           }
       }
        return ans;
       
   }
};
