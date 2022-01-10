ListNode* xthNodeFromEnd(ListNode* head, int x) {
	ListNode *f=head;
	ListNode *s=head;
	int c=0;
	while(c!=x)
	{
		c++;
		s=s->next;
	}
	while(s)
	{
		f=f->next;
		s=s->next;
	}
	return f;
}
