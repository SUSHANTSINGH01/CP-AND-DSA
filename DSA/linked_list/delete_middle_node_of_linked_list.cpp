
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head==0 || head->next==0) 
        return NULL;
        
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *prev=0;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};
