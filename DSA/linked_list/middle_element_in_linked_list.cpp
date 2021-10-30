ListNode* middleNode(ListNode* head) 
    {
        int c=1;
        ListNode *mid=head;
        while(head->next)
        {
            if(c & 1) 
            mid=mid->next;
            c++;
            head=head->next;
        }
        return mid;
    }
