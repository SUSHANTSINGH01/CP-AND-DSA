class Solution {
public:
     ListNode* pre;
     void reorder(ListNode* node)
     {
        if(node==0)
        return;
        
        reorder(node->next);
        
        if(!pre) 
        return;
        
         else if(pre==node || pre->next==node)
        {
            node->next=0;
            pre=0;
            return;
        }
        
        node->next=pre->next;
        pre->next=node;
        pre=node->next;
    }
    
    void reorderList(ListNode* head) 
    {
        pre=head;
        reorder(head);
    }
};
