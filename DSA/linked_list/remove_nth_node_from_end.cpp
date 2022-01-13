class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *res=head;
        ListNode *ret=head;
        int c=0;
        if(c==n)
        return ret->next;
        
        while(head)
        {
            c++;
            head=head->next;
        }
        c=c-n-1;
        c--;
        while(c>=0)
        {
            c--;
            res=res->next;
        }
        res->next=res->next->next;
        return ret;
     }
};
