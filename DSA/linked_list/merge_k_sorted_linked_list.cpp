/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 struct compare
{
    bool operator()(ListNode* const& a, ListNode* const& b)
    {
        return a->val > b->val;
    }
};
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more delasts

    if (A.empty())
    return NULL;
    ListNode* temp = new ListNode(0);
    ListNode* last = temp;
    priority_queue<ListNode*, vector<ListNode*>, compare> pq;
    
    for (auto i=0; i<A.size(); i++)
    {
        if (A[i])
        pq.push(A[i]);
    }
    
    while (!pq.empty())
    {
        last->next = pq.top();
        pq.pop();
        last = last->next;
        if (last->next)
        pq.push(last->next);
    }
    return temp->next;

}
