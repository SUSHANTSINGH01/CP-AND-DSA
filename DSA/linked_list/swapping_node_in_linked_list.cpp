class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k)
    {
         if(!head)
         return 0;
        
        ListNode* temp=head;
        int c=1;
        while(temp->next)
        {
            temp=temp->next;
            c++;
        }
        
        if(k==1 || k==c)
        {
            int f=head->val;
            head->val=temp->val;
            temp->val=f;
            return head;
        }
        
        if(c>k)
        {
            temp=head;
            int s=k;
            k--;
            while(k-- && temp)
            temp=temp->next;
            
            ListNode* tmp=head;
            c=c-s;
            while(c-- && tmp)
            tmp=tmp->next;
            
            c=tmp->val;
            tmp->val=temp->val;
            temp->val=c;
        }
       
        return head;
    }
        
};
