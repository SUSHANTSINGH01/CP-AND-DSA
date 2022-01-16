class Solution {
public:
    TreeNode* sortt(ListNode* head, ListNode* tail)
    {
        if(head==tail)
        return 0;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=tail &&  fast->next!=tail)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        TreeNode* tmp=new TreeNode(slow->val);
        tmp->left=sortt(head,slow);
        tmp->right=sortt(slow->next,tail);
        return tmp;
    }
    TreeNode* sortedListToBST(ListNode* head)
    {
        return sortt(head,0);
    }
};
