/*
Platform :- Codeofces 
Contest :- Codeforces Round #631 (Div. 2) - Thanks, Denis aramis Shitov!
Problem :- B  - Dreamond Likes Permutations
Hint :- Few things about Permutaion
            i. each element is atmost once in array
            ii. no missing elemnt from [1 to n] if max is n
            iii. sum of elements of permutation with 'n' elemnts is  [ ( n*(n+1))/2 ] 
         
*/
#include<bits/stdc++.h>
using namespace std;

class Comp
{
public:
    bool operator()(pair<int,long long> n1,pair<int,long long> n2) {
        if(n1.second==n2.second){
            return n1.first>n2.first;
        }
        return n1.second<n2.second;
    }
};

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        long long sum=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            sum+=A[i];
        }
        
        
        long long tot=0;
        set<long long>temp,temp1,pref,suff;
        for(int i=0;i<n-1;++i){
            if(temp.find(A[i])==temp.end()){
               tot+=A[i];
               temp.insert(A[i]);
               long long z=(i+1);
               z*=(z+1);
               z/=2;
               
               long long z2=n-(i+1);
               z2*=(z2+1);
               z2/=2;
               
               if(tot==z && z2==(sum-tot)){
                   pref.insert(i);
               }
            }
            
        }
        
        
        //from backward
        tot=0;
        int d=1;
        for(int i=n-1;i>0;--i){
            if(temp1.find(A[i])==temp1.end()){
                temp1.insert(A[i]);
                tot+=A[i];
                long long z=d;
                z*=(d+1);
                z/=2;
                
                long long z2=i;
                z2*=(i+1);
                z2/=2;
                
                if(tot==z && z2==(sum-tot)){
                    suff.insert(i);
                }
                
            }
            d++;
        }
       
       vector<pair<int,int>>ans;
       
       for(auto x:pref){
          // cout<<x+1<<" ";
           if(suff.find(x+1)!=suff.end()){
               ans.push_back({x+1,(n-(x+1))});
           }
       }
        
       cout<<ans.size()<<endl;
       for(int i=0;i<ans.size();++i){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
       }
       
       
    }
    
}
