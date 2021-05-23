/*
Platform :- Leetcode
Problem :- Jump Game VII
Contest :- Weekly contest 242
Hint :- if index containing '0' is range of i+minJump to i+maxJump then we can rech upto there where s[i]='0'
*/
class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int f=0;
        
        vector<int>temp;
        for(int i=0;i<s.size();++i){
            if(s[i]=='0')temp.push_back(i);
        }
        
        int lo=0,hi=0;
        int n=s.size();
        int dp[n];
        
        for(int i=0;i<n;++i)dp[i]=0;
        n--;
        dp[temp[0]]=1;
        lo=temp[0];
        hi=temp[0];
        
        for(int i=0;i<temp.size();++i){
            
            if(dp[temp[i]]==0){
               ///cout<<temp[i]<<" "<<lo<<" "<<hi<<endl;
                if((lo<=temp[i] && temp[i]<=hi)){
                    dp[temp[i]]=1;
                    int z=temp[i]+maxJump;
                    z=min(z,n);
                    int z2=temp[i]+minJump;
                
                      if(z2<=z){
                        if(s[z]=='0'){
                    dp[z]=1;
                    }
                     hi=z;
                    if(s[z2]=='0'){
                       dp[z2]=1;
                       
                    }lo=z2; 
                     }
                }
            }
            else{
                int z=temp[i]+maxJump;
                z=min(z,n);
                int z2=temp[i]+minJump;
                
                if(z2<=z){
                    if(s[z]=='0'){
                     dp[z]=1; 
                    }
                    hi=z;
                    if(s[z2]=='0'){
                       dp[z2]=1;
                       
                    } lo=z2; 
                   
                }
            }
            
        }
        
         
        return dp[n];
    }
};
