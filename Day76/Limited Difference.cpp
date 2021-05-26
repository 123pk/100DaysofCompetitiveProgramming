/*
Platform :- Topcoder
Contest :- Limited Difference
Contest :- SRM 806
Hint :- case 1 . if V = 1 , then answer is [1,2...,n]
            case 2. for a particular V the value of differences possible are from [1 to V] create a array in descending ordr from V to 1 
                    for each of the value greedily chose element to put in array
*/
#include<bits/stdc++.h>
using namespace std;

class LimitedDifferences{
  public:
   vector <int> arrange(int N, int V){
       vector<int>ans(N);
       
       if(V==1){
           for(int i=0;i<N;++i)ans[i]=i+1;
       }
       else{
           set<int>P;
           vector<int>temp;
           for(int i=1;i<N;++i)P.insert(i);
           for(int i=V;i>=1;--i)temp.push_back(i);
           ans[N-2]=N;
           ans[N-1]=N-temp[0];
           P.erase(N-temp[0]);
           temp.erase(temp.begin());
           int index=N-2;
           while(temp.size()){
               
                int x=temp[0]+ans[index];
                
                if(P.find(x)!=P.end()){
                    ans[index-1]=x;
                    P.erase(x);
                }
                else{
                    ans[index-1]=ans[index]-temp[0];
                    P.erase(ans[index]-temp[0]);
                }
                temp.erase(temp.begin());
                index--;
           }
           
           if(index!=0){
               int i=0;
               for(auto x:P){
                   ans[i]=x;
                   i++;
               }   
           }
           
       }
       
       return  ans;
   }
};
