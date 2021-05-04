/*
Platform :- Leetcode
Problem :- Non Decreasing Array
*/
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int f=0;
         
        int c=0;
        
        vector<int>z=nums;
        for(int i=1;i<z.size();++i){
            if(z[i]<z[i-1]){
                z[i]=z[i-1];
                c=i;
                break;
            }
        }
        
      //  cout<<z[0]<<" ";
        for(int i=1;i<z.size();++i){
           // cout<<z[i]<<" ";
            if(z[i]>=z[i-1])continue;
            f=1;break;
        }
    //    cout<<endl;
        
        if(f==0)return true;
        
        vector<int>temp=nums;
        temp[c-1]=temp[c];
        f=0;
       // cout<<temp[0]<<" ";
        for(int i=1;i<temp.size();++i){
            //cout<<temp[i]<<" ";
            if(temp[i]>=temp[i-1])continue;
            f=1;break;
        }
      //  cout<<endl;
        
        if(f)return false;
        return true;
    }
};
