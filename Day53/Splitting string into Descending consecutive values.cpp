/*
Platform :- Leetcode
Problem :- Splitting string into Descending consecutive values
Contest :- Weekly contest 239
*/

class Solution {
public:
    bool splitString(string z) {
        
        int l=0;
        string s;
        for(int i=0;i<z.size();++i){
            if(l){
                s+=z[i];
            }
            else{
                if(z[i]=='0')continue;
                else{
                    l=1;
                    s+=z[i];
                  
                }
            }
        }
        
        int f=0;
        for(int i=1;i<=(s.size()+1)/2;++i){
            string temp;
            int j=0;
            int l=0;
            for(j=0;j<i;++j){
                temp+=s[j];
            }
            
            long long z=stoll(temp,nullptr,10);
            z--;
            //cout<<z<<" start \n";
            while(j<s.size()){
                string check=to_string(z);
                if((check.size()>(s.size()-(j)))){
                    break;
                }
                //cout<<check<<" *"<<s[j]<<" & ";
                int g=0,l=0,k=0;
                while(j<s.size()){
                    if(g){
                        if(s[j]!=check[k]){
                            l=1;break;
                        }
                        else {
                            k++;
                            j++;
                        }
                    }   
                    else{
                        //cout<<s[j]<<" "<<check[k]<<endl;
                        if(s[j]=='0'){
                            if(check[k]=='0'){
                                k++;
                                j++;
                                break;
                            }
                            else{
                                j++;
                            }
                        }
                        else{
                            if(s[j]!=check[k]){
                               l=1; break;
                            }
                            else{
                                g=1;
                                k++;
                                j++;
                            }
                        }
                    }
                    if(k==check.size())break;
                }
               // cout<<l<<" ";
                if(l==0 && k==check.size()){
                    if(j==s.size()){
                        //cout<<" &^ ";
                        f=1;break;
                    }
                    else{
                       // cout<<z<<" limit ";
                        if(z==0){
                            int ll=0;
                            for(;j<s.size();++j){
                                if(s[j]!='0'){
                                    ll=1;
                                    break;
                                }
                            }
                            if(ll==0){
                                f=1;break;
                            }
                            else{
                                break;
                            }
                        }
                        else  z--;
                        //cout<<z<<" terminate ";
                    }
                }
                else {
                    //cout<< " what ";
                    break;
                }
            }
            if(f)break;
            
        }
        
        if(f)return true;
        return false;
    }
};
