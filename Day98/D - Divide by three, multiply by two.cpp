/*
Platform :- Codeforces
Contest :- Codeforces Round #479 (Div. 3)
Problem :- Divide by three, multiply by two
Approach :- we store frequency of each element in array , we run a loop on array and for each element we try to find all the values ( using dfs )which are preset in array
            if number of values is equal tto size of array then it means we got our answer and we break out of loop and print array
*/
#include<bits/stdc++.h>
using namespace std;

vector<long long>ans;
int n;
bool dfs(long long val,map<long long,int>P,vector<long long>temp,int count){
    
    long long x=val*2;
    if(P[x]){
        
        P[x]--;
        count++;
        temp.push_back(x);
         
        if(count==n){
         
            ans=temp;
            return true;
        }
        return dfs(x,P,temp,count);
    }
    else{
        
        if(val%3==0){
            val/=3;
            
            if(P[val]){
                P[val]--;
                count++;
                
                temp.push_back(val);
                if(count==n){
                    ans=temp;
                    return true;
                }
                return dfs(val,P,temp,count);
            }
        }
    }
    return false;
}

int main(){
 
    cin>>n;
    
    long long A[n];
    map<long long,int>P;
    for(int i=0;i<n;++i){
        cin>>A[i];
        P[A[i]]++;
    }
    
    int f=0;
    for(int i=0;i<n;++i){
        map<long long,int>Q=P;
        Q[A[i]]--;
        if(dfs(A[i],Q,{A[i]},1)){
         break;   
        }
    }
    
    
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
   
}
