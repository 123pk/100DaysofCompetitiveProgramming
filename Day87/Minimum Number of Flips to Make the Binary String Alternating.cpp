/*
Platform :- Leetcode
Problem :- Minimum Number of Flips to Make the Binary String Alternating
Contest :- Weekly contest 244

Approach :-
if you will analyse the problem on different test case you will find that "type -1 " task is not useful for even length strings .
First I checked if string is already valid or not . If not then 
I made two cases :-
Case 1 :- 
even length string , in this case I find the costs to covert my string to 101010... form and to 01010.. form and minimum out of two is our answer .

Case 2 :- 
For odd length string I break my string into two contiguous parts and "type 1" task is very useful here . I used prefix and suffix array , 
* where " prefix[ i ] " give me the cost of converting my sub string from [0 to i ]  into "10101..."
* and suffix [ i+1 ]" give me cost of converting my sub string from
 [ i+1 , end_of_string ]

similarly we will find for "010101..." and min ( pref[ i ] + suff[ i +1 ] ) is our answer . 
Use pen paper and solve this test case "01001001101", ans is 2 for this 

*/
class Solution {
public:
    int minFlips(string s) {
        if(s.size()==1)return 0;
        
        int f=0;
        for(int i=1;i<s.size();++i){
            if(s[i]==s[i-1])f=1;
        }
        if(f==0)return 0;
        
        int ans=INT_MAX;
        // we will break string into two substrings such that when added gives us original string
        // we will find the minimum operation to change both string
        
        if(s.size()%2==0){
            int o=0,z=0;
            //check min cost for coverting 101010..
            for(int i=0;i<s.size();++i){
                if(i%2==0){
                    if(s[i]=='0')o++;
                }
                else {
                    if(s[i]=='1')z++;
                }
            }
            ans=min(ans,o+z);
            
            o=0,z=0;
            //now converting it into 01010..
            for(int i=0;i<s.size();++i){
                if(i%2==0){
                    if(s[i]=='1')z++;
                }
                else {
                    if(s[i]=='0')o++;
                }
            }
            ans=min(ans,z+o);
        }
        else{
            int n=s.size();
            int pref[n],suff[n];
            
            //converting to 010101...
            int z=0,o=0;
            for(int i=0;i<n;++i){
                if(i%2==0){
                    if(s[i]=='1')z++;
                }
                else {
                    if(s[i]=='0')o++;
                }
                pref[i]=(o+z);
            }
            
            o=0,z=0;
            for(int i=n-1;i>=0;--i){
                if(i%2==0){
                    if(s[i]=='0')z++;
                }
                else {
                    if(s[i]=='1')o++;
                }
                suff[i]=o+z;
            }
            
            for(int i=0;i<n-1;++i){
               // cout<<pref[i]<<" "<<suff[i+1]<<endl;
                ans=min(ans,pref[i]+suff[i+1]);
            }
            
            
            //converting to 10101..
             z=0,o=0;
            for(int i=0;i<n;++i){
                if(i%2==0){
                    if(s[i]=='0')z++;
                }
                else{
                    if(s[i]=='1')o++;
                } 
                pref[i]=(o+z);
            }
            
            o=0,z=0;
            for(int i=n-1;i>=0;--i){
                if(i%2==0){
                    if(s[i]=='1')z++;
                }
                else {
                    if(s[i]=='0')o++;
                }
                suff[i]=o+z;
            }
            
            for(int i=0;i<n-1;++i){
                ans=min(ans,pref[i]+suff[i+1]);
            }
            
        }
        return ans;
    }
};
