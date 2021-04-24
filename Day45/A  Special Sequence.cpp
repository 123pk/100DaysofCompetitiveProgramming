/*
Platform :- Hackerearth
Contest :- Hackerearth April Circuits 2021
Problem :- A Special Sequence
Hint :- Binary search , precomputation 
*/


#include<bits/stdc++.h>
using namespace std;

long long bs(vector<long long>&P,long long l){
    int s=0,e=P.size()-1;
    int m=(s+e)/2;
    
    while(s<e){
        if((e-s)==1)break;
        
        if(P[m]<l){
            s=m;
            m=(s+e)/2;
        }
        else{
            e=m;
            m=(s+e)/2;
        }
    }
    return P[e];
}

int main(){

    	 
    long long temp=1;
    vector<long long>P;
    map<long long,int>Q;
    P.push_back(1);
    int c=1;
    Q[temp]=c;
    while(temp<=1e13){
        long long z=floor(sqrt(c));
        z*=c;
        z+=((c+1)/2);
        temp+=z;
        c++;
        P.push_back(temp);
        Q[temp]=c;
    }

    int t;
    cin>>t;
    
    while(t--){
        long long l,r;
        cin>>l>>r;
        
        if((Q[l] && Q[r])){
            int ans=(Q[r]-Q[l])+1;
            cout<<ans<<endl;
            continue;
        }
        
        int z1;
        if(Q[l]){
            z1=Q[l];
        }
        else{
            long long zz=bs(P,l);
            //cout<<zz<<" check ";
            z1=Q[zz]-1;
        }
        
        int z2;
        if(Q[r]){
            z2=Q[r];
            //cout<<z2<<" check 2"<<endl;
        }
        else{
            long long zz=bs(P,r);
            z2=Q[zz]-1;
        }
         
         int ans=(z2-z1)+1;
         cout<<ans<<endl;

    }
    

}
