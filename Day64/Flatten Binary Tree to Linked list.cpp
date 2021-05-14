/*
Platform :- Leetcode
Problem :- Flatten Binary Tree to Linked List
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode*node,vector<int>& P,vector<TreeNode*>&Q){
       if(!node)return;
        P.push_back(node->val);
        Q.push_back(node);
        preorder(node->left,P,Q);
        preorder(node->right,P,Q);
    }
    
    void flatten(TreeNode* root) {
        if(!root)return;
        
       vector<int>P;
        vector<TreeNode*>Q;
        preorder(root,P,Q);
        
        root->left=NULL;
        root->right=NULL;
        TreeNode* z=new TreeNode;
        z=root;
        for(int i=1;i<P.size();++i){
           TreeNode* temp=Q[i];
            temp->val=P[i];
            z->right=temp;
            temp->left=NULL;
            z=z->right;
        }
        
        
    }
};
