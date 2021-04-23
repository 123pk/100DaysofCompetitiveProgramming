/*
Platform :- Codeforces
Contest :- Contest 2050 and Codeforces Round #718 (Div. 1 + Div. 2)
Problem :- C - Fillomino
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int A[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            A[i][j]=0;
        }
    }
    
    for(int i=0;i<n;++i){
        cin>>A[i][i];
    }
    
    for(int i=0;i<n;++i){
        int temp=A[i][i]-1;
        int k=i,j=i;
        while(temp){
            if((j-1)>=0){
                if(A[k][(j-1)]){
                    k++;
                    A[k][j]=A[i][i];
                }
                else{
                    j--;
                    A[k][j]=A[i][i];
                }
            }
            else{
                if((k+1)<n){
                    k+=1;
                    A[k][j]=A[i][i];               
                }
            }
            temp--;
        }
    }
    
    for(int i=0;i<n;++i){
        for(int j=0;j<=i;++j){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
