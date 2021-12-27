class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
      ListNode* temp=head;
      while(temp)
      {
        ListNode* tempp=temp->next;
        while(tempp && temp->val==tempp->val)
        tempp=tempp->next;
        
        temp->next=tempp;
        temp=temp->next;
    }
    return head;   
    }
};
