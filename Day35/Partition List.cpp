/*
Platform :- Leetcode
Problem :- Partition List
Event :-  April Daily challenge
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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int>P,Q;
        ListNode*temp=head;
        
        while(temp){
            if(temp->val<x){
                P.push_back(temp->val);
            }
            else Q.push_back(temp->val);
            temp=temp->next;
        }
        
        ListNode*ans=NULL;
        temp=NULL;
        //sort(P.begin(),P.end());
        for(auto x:P){
           
            if(!ans){
            ListNode* y=new ListNode(x);
            temp=y;
            temp->next=NULL;
            ans=temp;
           }
            else{
                ListNode* y=new ListNode(x);
                temp->next=y;
                y->next=NULL;
                temp=temp->next;
            }
        }
        
        for(auto x:Q){
            if(!ans){
            ListNode* y=new ListNode(x);
            temp=y;
            temp->next=NULL;
            ans=temp;
           }
            else{
                ListNode* y=new ListNode(x);
                temp->next=y;
                y->next=NULL;
                temp=temp->next;
            }
        }
        
        return ans;
    }
};
