/*
Platform :- Leetcode
Problem :- Reconstruct Original digit from English
Event:- Leetcode Daily challenge
*/
class Solution {
public:
    string originalDigits(string s) {
        map<char,int>P;
        for(auto x:s){
            P[x]++;
        }
        vector<string>Q;
        string f1={'g','x','z','w','u'};
        string f2={'o','f','t','s'};
        
        for(int i=0;i<5;++i){
            if(P[f1[i]]){
                string temp;
                for(int j=0;j<P[f1[i]];++j){
                    if(f1[i]=='g'){
                        temp+='8';
                    }
                    else if(f1[i]=='x'){
                        temp+='6';
                    }
                    else if(f1[i]=='z'){
                        temp+='0';
                    }
                    else if(f1[i]=='w'){
                        temp+='2';
                    }
                    else temp+='4';
                }
                
                Q.push_back(temp);
                if(f1[i]=='g'){
                        P['e']-=P[f1[i]];
                        P['i']-=P[f1[i]];
                        P['h']-=P[f1[i]];
                        P['t']-=P[f1[i]];
                        P['g']-=P[f1[i]];
                }
                
                if(f1[i]=='x'){
                    P['s']-=P[f1[i]];
                    P['i']-=P[f1[i]];
                    P['x']-=P[f1[i]];
                }
                
                if(f1[i]=='z'){
                    P['e']-=P[f1[i]];
                    P['r']-=P[f1[i]];
                    P['o']-=P[f1[i]];
                    P['z']-=P[f1[i]];
                }
                if(f1[i]=='w'){
                    P['t']-=P[f1[i]];
                    P['o']-=P[f1[i]];
                    P['w']-=P[f1[i]];
                }
                
                if(f1[i]=='u'){
                    P['f']-=P[f1[i]];
                    P['o']-=P[f1[i]];
                    P['r']-=P[f1[i]];
                    P[f1[i]]=0;
                }
            }
        }
        
        
        for(int i=0;i<5;++i){
            if(P[f2[i]]){
                string temp;
                for(int j=0;j<P[f2[i]];++j){
                    if(f2[i]=='o'){
                        temp+='1';
                    }
                    else if(f2[i]=='f'){
                        temp+='5';
                    }
                    else if(f2[i]=='t'){
                        temp+='3';
                    }
                    else if(f2[i]=='s'){
                        temp+='7';
                    }
                     
                }
                Q.push_back(temp);
                
                if(f2[i]=='o'){
                    P['n']-=P[f2[i]];
                    P['e']-=P[f2[i]];
                    P['o']-=P[f2[i]];
                }
                
                if(f2[i]=='f'){
                    P['i']-=P[f2[i]];
                    P['v']-=P[f2[i]];
                    P['e']-=P[f2[i]];
                    P['f']=0;
                }
                
                if(f2[i]=='t'){
                    P['h']-=P[f2[i]];
                    P['r']-=P[f2[i]];
                    P['e']-=P[f2[i]]*2;
                    P['t']=0;
                }
                
                if(f1[i]=='s'){
                    P['e']-=P[f2[i]]*2;
                    P['v']-=P[f2[i]];
                    P['n']-=P[f2[i]];
                    P['s']=0;
                }
                
            }
        }
        
        if(P['i']){
            string temp;
            for(int i=0;i<P['i'];++i){
                temp+='9';
            }
            Q.push_back(temp);
        }
        
        
        string ans;
        for(auto x:Q){
            ans+=x;
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};
