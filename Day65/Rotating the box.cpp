/*
Platform :- Leetcode
Problem :- Rotating the box
Contest :- Bi weekly contest 52
*/
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        
        int n=box.size();
        int m=box[0].size();
        vector<vector<char>>ans;
        
        for(int j=0;j<box[0].size();++j){
            vector<char>temp;
            for(int i=n-1;i>=0;--i){
                 temp.push_back(box[i][j]);
            }
            ans.push_back(temp);
        } 
        

        for(int j=0;j<n;++j){
            stack<char>Q;
            int k=m-1;
            //cout<<ans[m-1][0]<<endl;
            for(int i=m-1;i>=0;--i){
                if(ans[i][j]=='*'){
                    if(!Q.empty()){
                        for(int l=k;l>i;--l){
                            if(!Q.empty()){
                                ans[l][j]='#';
                                    Q.pop();
                            }
                            else ans[l][j]='.';
                        }
                    }
                    k=i-1;
                }
                else{
                    
                    if(ans[i][j]=='#')Q.push('#');
                    
                    if(i==0 && Q.size()){
                        // cout<<" * "<<k<<" \n";
                        for(int l=k;l>=i;--l){
                            if(!Q.empty()){
                                ans[l][j]='#';
                                Q.pop();
                            }
                            else ans[l][j]='.';
                        }
                    }
                }
            }
        }
        
        
        
        return ans;
    }
};
