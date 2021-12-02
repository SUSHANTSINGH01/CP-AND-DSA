/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) 
{
    ListNode *start = new ListNode(0);
    ListNode *head =start;
    
    while(A && B)
    {
        if(A->val>=B->val)
        {
            start->next=B;
            start=start->next;
            B=B->next;
        }
        else
        {
            start->next=A;
            start=start->next;
            A=A->next; 
        }
    }
    while(B)
    {
         start->next=B;
        start=start->next;
        B=B->next;
    }
    while(A)
    {
            start->next=A;
            start=start->next;
             A=A->next; 
    }
    return head->next;

}
