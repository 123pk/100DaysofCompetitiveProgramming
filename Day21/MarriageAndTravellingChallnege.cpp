/*
Platform :- Topcoder
Problem :- MarriageAndTravellingChallenege
Contest :- SRM 803
*/

#include<bits/stdc++.h>
using namespace std;

class  MarriageAndTravelingChallenge{

public:
   string solve(string S){
       string ans;
       int d=1;
       for(int i=0;i<S.size();i+=d){
           ans+=S[i];
           d++;
       }
       
       return ans;
   }
};
