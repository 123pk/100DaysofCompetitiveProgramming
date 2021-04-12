/*
Platform :- Leetcode
Problem :- Deepest Leaves Sum
*/
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        
        int ans=0;
        if(!root)return 0;
       queue<TreeNode*>P;
        P.push(root);
       while(!P.empty()){
           int c=P.size();
           int tot=0;
           for(int i=1;i<=c;++i){
               TreeNode*temp=P.front();
               P.pop();
               tot+=temp->val;
               if(temp->left){
                   P.push(temp->left);
               }
               if(temp->right){
                   P.push(temp->right);
               }
           }
           ans=tot;
       }
        return ans;
    }
};
