/*
Platform :- Leetcode
Problem:- Convert sorted list to binary search tree
Event :- April Daily challenge
Hint:-  Like merge sort we divide given array into subarrays and choose the middle element as next left or right node accordingly as array as sorted
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
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
    void splitl(TreeNode* node,int l, int r,vector<int>& A){
        if(l>r  || r>=A.size())return;
        if(l==r){
            TreeNode* z=new TreeNode;
            node->left=z;
            z->val=A[l];
            z->left=z->right=NULL;
            return;
        }
        int temp=(l+r)/2;
        TreeNode* z=new TreeNode;
        z->val=A[temp];
        node->left=z;
        z->left=z->right=NULL;
        cout<<l<<" "<<r<<" "<<temp<<endl;
        splitl(z,l,temp-1,A);
        splitr(z,temp+1,r,A);
    }
    
    void splitr(TreeNode* node,int l,int r,vector<int>&A){
        if(l>r)return;
        if(l==r){
            TreeNode* z=new TreeNode;
            node->right=z;
            z->val=A[l];
            z->left=z->right=NULL;
            return;
        }
        int temp=(l+r)/2;
        TreeNode* z=new TreeNode;
        z->val=A[temp];
        node->right=z;
        z->left=z->right=NULL;
         
        splitl(z,l,temp-1,A);
        splitr(z,temp+1,r,A);
    }
    
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>A;
        ListNode* temp=head;
        while(temp){
            A.push_back(temp->val);
            temp=temp->next;
        }
        
        if(A.size()){
            int l=0,r=A.size()-1,m=(l+r)/2;
            TreeNode*head=new TreeNode;
            head->val=A[m];
            splitl(head,0,m-1,A);
            splitr(head,m+1,r,A);
            return head;
        }
        return NULL;
    }
};
