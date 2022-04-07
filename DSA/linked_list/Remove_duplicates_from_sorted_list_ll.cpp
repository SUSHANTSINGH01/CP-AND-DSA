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
    ListNode *start=new ListNode(0);
    ListNode *temp=start;
    map<int,int>mp;
    while(A)
    {
        mp[A->val]++;
        A=A->next;
    }
    for(auto it:mp)
    {
        if(it.second==1)
        {
            ListNode *add1=new ListNode(it.first);
            start->next=add1;
            start=start->next;
        }
    }
    return temp->next;
}
