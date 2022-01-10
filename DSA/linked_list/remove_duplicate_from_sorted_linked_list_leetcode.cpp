// first approach 

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

// second approach

ListNode* removeDuplicates(ListNode* head) {
	if(!head) 
	return head;
	if(!head->next)
	return head;
	
	removeDuplicates(head->next);
	
	if(head->data == head->next->data)
    head->next = head->next->next;
	
	return head;
}
