/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) 
{
    ListNode* start=A;
    while(start!=NULL && start->next!=NULL)
    {
        if(start->val==start->next->val)
        {
            ListNode * temp=start->next;
            start->next=temp->next;
            free(temp);
            continue;
        }
        else
        start=start->next;
    }
    return A;
}
