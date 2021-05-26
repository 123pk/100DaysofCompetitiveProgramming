/*
Platform :- Codeforces 
contest :- 2020-2021 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules)
Problem :- C - BerrPizza
Approach :- i. Since Monocrap gets the customer who first visited ----> we can find who's next by just storing in vector and using a pointer that points at next guest
            ii. Polycrap prioritise on basis of money -->we can use priority queue of pairs storing { index , money } and sorting on basis of {money}
            iii.  we need to maintain a list of index which are already served we will use { <set> in c++ } for storing already served guests so we will not serve them again
                  in above two cases 

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
    int q;
    cin>>q;
    
    priority_queue<pair<int,long long>,vector<pair<int,long long>>,Comp>P;
    vector<long long>A;
    set<int> already_served;
    int sz=1;
    int index=1;
    
    for(int i=0;i<q;++i){
        int y;
        cin>>y;
        
        if(y==1){
            long long temp;
            cin>>temp;
            
            A.push_back(temp);
            P.push({sz,temp});
            sz++;
            
        }
         else if(y==3){
            
            int ans=-1;
            while(1){
                pair<long long,int>tp = P.top();
                P.pop();
 
                if(already_served.find(tp.first)==already_served.end()){
                    
                    ans=tp.first;
                    already_served.insert(tp.first);
                    break;
                }
            }
            
            cout<<ans<<" ";
        }
        else{
            int ans=-1;
            
            while(1){
                if(already_served.find(index)==already_served.end()){
                    ans=index;
                    already_served.insert(index);
                    break;
                }
                index++;
            }
            
             cout<<ans<<" ";
        } 
    }
    
    
    cout<<endl;
    
}
