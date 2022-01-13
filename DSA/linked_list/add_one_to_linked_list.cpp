/* This is the ListNode class definition

class ListNode {
public:
	int data;
	ListNode* next;

	ListNode(int data) {
		this->data = data;
		this->next = NULL;
	}
};
*/
ListNode *reverse(ListNode *head)
{
	if(!head || head->next==NULL)
	return head;
	
	ListNode *res=reverse(head->next);
	head->next->next=head;
	head->next=0;
	return res;
}
ListNode* addOneToList(ListNode* head) {
	// add your logic here
	ListNode *rev1=head;
	head=reverse(rev1);
	ListNode *rev2=head;
	if(!head)
		return 0;
	
		
	int rem=(head->data+1)/10;
	head->data=(head->data+1)%10;
	if(!head->next)
	{
		if(rem>=1)
		{
			ListNode *tmp=new ListNode(rem);
			head->next=tmp;
		}
		head=head->next;
	}
	if(head)
	head=head->next;
	
	while(head && head->next)
	{
		int temp=(head->data+rem)/10;
	    head->data=(head->data+rem)%10;	
		rem=temp;
		head=head->next;
	}
	if(head)
	{
		int temp=(head->data+rem)/10;
	    head->data=(head->data+rem)%10;	
		rem=temp;
		if(rem>=1)
		{
			ListNode *tmp=new ListNode(rem);
			head->next=tmp;
		}
	}
	   
	return reverse(rev2);
	
	
}
