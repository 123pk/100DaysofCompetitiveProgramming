/*
Platform :- Codeforces 
Contest :- Codeforces Round 529 Div 3
Problem :- C - Power of 2
Approach :- First find bits representation of given number , if no of '1's in bits representation are > k then  it is never possible .
            else we push (2,i) where ith bit is '1' to our priority queue , then we start dividing the max element by 2 and inccrease value of 'count'as soon as it becomes
            'k' we break out of loop and print all elements of priority_queue else we have '1' as out max element then also it is not possible
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int k;
    cin>>n>>k;
    
    string temp=bitset<64>(n).to_string();
    
    int c=count(temp.begin(),temp.end(),'1');
    if(c>k){
        cout<<"NO"<<endl;
    }
    else{
        priority_queue<long long>P;
        reverse(temp.begin(),temp.end());
        for(int i=0;i<64;++i){
            if(temp[i]=='1'){
                long long val=pow(2,i);
                P.push(val);
            }
        }
        
        int f=0;
        while(c<k){
            long long val=P.top();
            if(val==1){
                f=1;break;
            }
            P.pop();
            c++;
            val/=2;
            P.push(val);
            P.push(val);
        }
        
        if(f)cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            while(!P.empty()){
                cout<<P.top()<<" ";
                P.pop();
            }
            cout<<endl;
        }
    }
}
