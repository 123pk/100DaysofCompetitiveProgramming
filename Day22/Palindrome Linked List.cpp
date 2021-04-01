/*
Platform :- Leetcode
Problem :- Palindrome Linked List
*/
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
        {
            return true;
        }
        vector<int>P;
        ListNode*p=NULL;
        p=head;
        
        if(p->next==NULL)
        {
            return true;
        }
        
        while(p)
        {
            P.push_back(p->val);
            p=p->next;
        }
        
        for(int i=0;i<P.size()/2;++i)
        {
            if(P[i]!=P[P.size()-1-i])
            {
                return false;
            }
        }
        return true;
    }
};
