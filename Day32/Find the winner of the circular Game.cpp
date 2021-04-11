/*
Platform :- Contest
Problem :-  Find the winner of the circular Game
Contest :- Weekly contest 236
*/
int pk(vector<int> list, int start, int k)
{
  
  if(list.size() == 1)
  {
    return list[0];
  }
  
  start = (start + k) % list.size();
 
   
  list.erase(list.begin() + start);
 
   
  return pk(list, start, k);
}

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>temp;
        for(int i=1;i<=n;++i){
            temp.push_back(i);
        }
        
        return pk(temp,0,k-1);
    }
};
