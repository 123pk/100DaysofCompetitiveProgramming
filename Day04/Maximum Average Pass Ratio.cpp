/*
Platform :- Leetocode
Problem :- Maximum Average Pass Ratio
Contest :- Weekly contest 232
Approach :- use min priority_queue and always find the value which have more change that is if we add 
            one to numerator and denominator one with maximum change value is choosen
*/


struct myComp { 
    constexpr bool operator()( 
        pair<int, int> const& a, 
        pair<int, int> const& b) 
        const noexcept 
    { 
        double temp1=a.first;
        double temp2=a.second;
        double temp3=b.first;
        double temp4=b.second;
        
        double z=temp1/temp2;
        double z2=(temp1+1)/(temp2+1);
        
        double z3=(temp3/temp4);
        double z4=(temp3+1)/(temp4+1);
        
        return (z2-z) < (z4-z3); 
    } 
}; 

class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int k) {
        double n=classes.size();
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,myComp>P;
        d=1;
        for(auto x:classes){
            P.push({x[0],x[1]});
            d++;
        }
        
        
        while(k--){
         
            pair<int,int>temp=P.top();
            P.pop();
            P.push({temp.first+1,temp.second+1});
        }
        
        double ans=0;
        while(!P.empty()){
            
            double temp1=P.top().first;
            double temp2=P.top().second;
            ans+=(temp1/temp2);
            P.pop();
        }
        ans/=n;         
        return ans;
        
    }
};
