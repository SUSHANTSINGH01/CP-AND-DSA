// greedy approach

ListNode* reverseLinkedListRange(ListNode* head, int left, int right) {
	// add your logic here
	   ListNode *beg=new ListNode(0);
	  
	   ListNode *st=beg;
	   ListNode *temp;
       ListNode *prev=0;
	   int c=1;
	   while(c!=left)
	   {
		   c++;
		   ListNode *tmp=new ListNode(head->data);
		   beg->next=tmp;
		   beg=beg->next;
		   head=head->next;
		 
		   
	   } 
	   while(c!=right+1 && head!=NULL)
        {
			c++;
            temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
	    while(prev!=NULL)
		{
		   ListNode *tmp=new ListNode(prev->data);
		   beg->next=tmp;
		   beg=beg->next;
		   prev=prev->next;
		}
	   while(head!=NULL)
	   {
		   ListNode *tmp=new ListNode(head->data);
		   beg->next=tmp;
		   beg=beg->next;
		   head=head->next;
		  
	   } 
	    return st->next;
}

// optimized approach

ListNode* reverse(ListNode* head) 
{
         
         if(head==NULL || head->next==NULL)
         return head;
 
        ListNode* rest=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return rest;
}
ListNode* reverseLinkedListRange(ListNode* head, int left, int right) {
	
	ListNode* curr = head;
	ListNode* start;
	ListNode* last;
	int i=1;
	while(curr!=NULL) 
	{
		if(i>right) 
		break;
		
		if(i<left) 
		start=curr;
		
		if(i==right) 
		last=curr;
		
		curr=curr->next;
		i++;
	}
	last->next=0;
	
	if(left==1) 
	{
		last=head;
		head=reverse(head);
	} 
	else 
	{
		last=start->next;
		start->next = reverse(start->next);
	}
	last->next = curr;
	return head;
}
