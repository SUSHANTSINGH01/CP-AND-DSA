/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A)
{
    vector<int>V;
    if(A==0 || A->next==0)
    return A;
    while(A!=0)
    {
        V.push_back(A->val);
        A=A->next;
    }
    ListNode *start=new ListNode(V[1]);
    ListNode *ret=start;
    start->next=new ListNode(V[0]);
    start=start->next;
    for(int i=2;i<V.size();i+=2)
    {
        if(i+1<V.size())
        {
           start->next=new ListNode(V[i+1]);
           start=start->next;
        }
        start->next=new ListNode(V[i]);
        start=start->next;
    }
    return ret;
}
