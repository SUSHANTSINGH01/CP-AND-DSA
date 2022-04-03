/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) 
{
    ListNode *start=A;
    ListNode *head=A;
    int c=0;
    while(A!=0)
    {
        c++;
        A=A->next;
    }

    if(c<=B)
    return head->next;
    int c1=c-B-1;
    //cout<<c<<" "<<c1;
    while(c1--)
    { 
        head=head->next;
    }
    //cout<<head->val;
    if(B==1)
    head->next=0;
    else
    head->next=head->next->next;

    return start;
}
