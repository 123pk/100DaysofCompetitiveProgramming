/*
Platform :- Atcoder
Problem :- C - pow
Contest :- Atcoder Beginner contest 205
Approach :- there are three cases 
            Case 1 :- both 'a' & 'b' are +ve in this case which ever element is greater will have greater 'c'th power  value
            Case 2 :- either one is negative here if 'c' is even then element with highest absolute value will have greater cth power , else if odd power then 
                      value which is positive has greater value
            Case 3 :- both negative same as case 1 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long a,b,c;
    cin>>a>>b>>c;
    
    if(a==b)cout<<"="<<endl;
    else{
        if(abs(a)==abs(b)){
            if(c%2){
                if(a>=0)cout<<'>'<<endl;
                else cout<<'<'<<endl;
            }
            else cout<<"="<<endl;
        }
        else{
             if(c%2==0){
                a=abs(a);
            b=abs(b);
                
            } 
            if(a>b)cout<<">"<<endl;
            else cout<<"<"<<endl;
        }
    }
}
