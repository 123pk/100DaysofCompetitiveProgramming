
#include<bits/stdc++.h>
using namespace std;

long long pk(string s) {
	long long n = 0 , p = 1;
	for (int i = s.length() - 1; i >= 0; i--) {
		n += ((s[i] - '0') * p);
		p *= 2;
	}
	return n;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long c;
        cin>>c;
        
        string temp="";
        long long z=c;
        while(z){
            temp+=to_string(z%2);
            z/=2;
        }
         reverse(temp.begin(),temp.end());
         
        long long ans=0;
        int f=0;
        string xx,yy;
        for(int i=0;i<temp.size();++i){
            if(temp[i]=='0'){
                xx+='1';
                yy+='1';
            }
            else {
                if(f){
                    xx+='0';
                    yy+='1';
                    
                }
                else{
                    xx+='1';
                    yy+='0';
                    f=1;
                }
            }
            //cout<<xx<<" "<<yy<<" "<<f<<endl;
        }
        
        long long b=pk(xx);
        long long cc=pk(yy);
        ans=b*cc;
        cout<<ans<<"\n";
    }
}
