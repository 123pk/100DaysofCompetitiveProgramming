/*
Platform :- Leetcode
Problem :- Minimum speed to arrive on Time
Contest :- Weekly contest 242
Approach :- Case i.  when no solution we will check for value of 10000000 if (total_time > hour) then it is never possible 
            Case ii. we will maintain two vlues , start and end which will be (start = 1 and end = 10000001)
                     then we will find the "mid" and find the total time required if our speed is equal to "mid"
                     we will compare with "hour" and change the value of "start" and "end" respecively .
                       
*/

class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int mx=INT_MIN;
        int n=dist.size();
        double z=n-1;
        double tot=0;
        for(int i=0;i<dist.size();++i){
            mx=max(mx,dist[i]);
            tot+=dist[i];
        }
        z+=(dist[n-1]/1e7);
        
         // if our speed is 1e7 and out time taken to reach office is greater than hour then it never possible to reach on time
        if(hour<z)return -1;
        
                
         // we will do binary search from 1 to 1e7 and find suitable mid such that our ( time_take == hour)
        double start=1;
        double end=1e7+1;
        int ans=1e7;
        int f=0;
        double mid=ceil((start+end)/2);
        while(start<end){
            
            double temp=0;
            for(int i=0;i<n;++i){
                double x=dist[i];
                double y=mid;
                if(i==n-1){
                    
                    temp+=(x/y);
                }
                else{
                    temp+=ceil(x/y);
                }
            }
            
             
            if(temp<=hour){
                ans=ceil(mid);
                end=mid;
                if(mid== ((start+end)/2))break;
                mid= ((start+end)/2);
            }
            else{
                start=mid;
                if(mid==((start+end)/2))break;
                mid= ((start+end)/2);
            }
           
        }
        return ans;
    }
};
