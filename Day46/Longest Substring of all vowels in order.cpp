/*
Platform :- Leetcode
Contest :- Weekly contest 238
Problem :- Longest Substring of all vowels in order.cpp
*/
class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int ans=0;
        
        char ch='a';
        int temp=0,g=0;
        for(int i=0;i<word.size();++i){
            if(g){
            if(word[i]==ch){
                temp++;
                if(word[i]=='u'){
                      // cout<<temp<<" "<<ans<<endl;
                       ans=max(ans,temp);
                   }
           
            }
            else{
                if(word[i]=='e' && ch!='a'){
                   // ans=max(ans,temp);
                    temp=0;   
                    g=0;
                }
                else if(word[i]=='i' && ch!='e'){
                   // ans=max(ans,temp);
                    temp=0;
                    g=0;
                }
                else if(word[i]=='o' && ch!='i'){
                  //  ans=max(ans,temp);
                    temp=0;
                    g=0;
                }
                else if(word[i]=='u' && ch!='o'){
                   // ans=max(ans,temp);
                    temp=0;
                    g=0;
                }
                else if(ch>word[i]){
                    if(word[i]=='a'){
                        temp=1;
                        g=1;
                        ch='a';
                    }
                    else{
                    ch='a';
                    temp=0;
                    g=0;
                    }
                }
                else{
                   temp++;
                    ch=word[i];
                   if(ch=='u'){
                      // cout<<temp<<" "<<ans<<endl;
                       ans=max(ans,temp);
                   }

                }
                
                }
            }
            else{
                if(word[i]=='a'){
                    temp=1;
                    g=1;
                    ch='a';
                     
                }
            }
        }
        
        return ans;
    }
};
