// first approach 

ListNode* reverseLinkedList (ListNode* head) {
	ListNode *prev=0;
	ListNode *curr=head;
	ListNode *next=head;
	while(curr)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}

// second approach

ListNode* reverseLinkedList (ListNode* head) {
	if(!head)
	return head;
	if(!head->next)
	return head;
	ListNode *temp=reverseLinkedList(head->next);
	head->next->next=head;
	head->next=0;
	return temp;
	
}
