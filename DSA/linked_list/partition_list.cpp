
class Solution {
public:
    ListNode* partition(ListNode* head, int x) 
    {
        if(!head || !head->next)
        return head;
        
        ListNode *head1= 0;
        ListNode *tail1= 0;
        ListNode *head2= 0; 
        ListNode *tail2= 0;
        
        ListNode *curr=head;
        while(curr)
        {
            if(curr->val<x)
            {
                if(!head1)
                {
                    head1=curr;
                    tail1=curr;
                }
                else
                {
                    tail1->next=curr;
                    tail1=tail1->next;
                }
            }
            else
            {
                if(!head2)
                {
                    head2=curr;
                    tail2=curr;
                }
                else
                {
                    tail2->next=curr;
                    tail2=tail2->next;
                }
            }
            
            curr=curr->next;
        }
        if(tail2)
        tail2->next=0;
        
        if(!head1)
        return head2;
        
        tail1->next=head2;
        
        return head1;
    }
};
