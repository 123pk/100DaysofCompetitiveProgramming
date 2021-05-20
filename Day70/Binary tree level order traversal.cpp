/*
Platform :-  Leetcode
Problem :- Binary Tree level order traversal
*/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        
        if(!root)return ans;
        
        queue<TreeNode*>P;
        P.push(root);
        
        while(!P.empty()){
            int c=P.size();
            vector<int>z;
            for(int i=1;i<=c;++i){
                TreeNode* temp=P.front();
                z.push_back(temp->val);
                P.pop();
                
                if(temp->left){
                    P.push(temp->left);
                }
                
                if(temp->right)P.push(temp->right);
            }
            ans.push_back(z);
        }
        return ans;
    }
};
