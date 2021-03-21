/*
Platform :- Leetcode
Problem :- Number of Orders in Backlog
Contest :- Weekly contest 233
*/

class Solution {
public:
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) {
        priority_queue<pair<int,int>>P;
        long int mod=1e9+7;
        int tot=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Q;
        
        for(int i=0;i<orders.size();++i){
            if(orders[i][2]==0){
                   if(!Q.empty()){
                        
                           while(!Q.empty()){
                               if(Q.top().first<=orders[i][0]){
                               if(Q.top().second<orders[i][1]){
                                   orders[i][1]-=Q.top().second;
                                   Q.pop();
                                   if(Q.empty()){
                                       P.push({orders[i][0],orders[i][1]});
                                   }
                               }
                               else{
                                   if(Q.top().second==orders[i][1]){
                                        orders[i][1]-=Q.top().second;
                                       Q.pop();
                                       break;
                                   }
                                   else{
                                       pair<int,int>temp=Q.top();
                                       Q.pop();
                                       Q.push({temp.first,temp.second-orders[i][1]});
                                       break;
                                   }
                               }
                               }
                               else{
                                   P.push({orders[i][0],orders[i][1]});
                                   break;
                               }
                           }
                            
                       
                   }
                else{
                     P.push({orders[i][0],orders[i][1]});
                }
            }
            else{
                if(!P.empty()){
                      
                            
                           while(!P.empty()){
                               if((P.top().first>=orders[i][0])){
                                   if(P.top().second<orders[i][1]){
                                       orders[i][1]-=P.top().second;
                                       P.pop();
                                       if(P.empty()){
                                           Q.push({orders[i][0],orders[i][1]});
                                       }
                                   }
                                   else{
                                       if(P.top().second==orders[i][1]){
                                           P.pop();
                                           break;
                                       }
                                       else{
                                           pair<int,int>temp=P.top();
                                           temp.second-=orders[i][1];
                                           P.pop();
                                           P.push({temp.first,temp.second});
                                           break;
                                       }
                                   }
                               }
                               else{
                                   Q.push({orders[i][0],orders[i][1]});
                                   break;
                               }
                           }
                        
                   }
                else{
                     Q.push({orders[i][0],orders[i][1]});
                }
            }
        }
        
        while(!P.empty()){
            //cout<<P.top().first<<" "<<P.top().second<<endl;
            tot=((tot%mod)+(P.top().second%mod))%mod;
            P.pop();
        }
        
        while(!Q.empty()){
           tot=((tot%mod)+(Q.top().second%mod))%mod;
           Q.pop(); 
        }
        return tot;
    }
};
