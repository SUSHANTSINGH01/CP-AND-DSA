ListNode* Solution::insertionSortList(ListNode* A) 
{

    if(A==0 || A->next==0)
    return A;
    ListNode *new_start = NULL;
    ListNode *temp = A;
    
    while(temp)
    {
        ListNode* curr = temp;
        temp = temp->next;
        
        if(new_start==0 || new_start->val >= curr->val)
        {
            curr->next = new_start;
            new_start = curr;
        }
        else
        {
            ListNode* temp1 = new_start;
            while (temp1)
            {
                ListNode* strt = temp1;
                temp1 = temp1->next;
                
                if (strt->next==0 || strt->next->val > curr->val)
                {
                    curr->next = strt->next;
                    strt->next = curr;
                    break;
                }
            }
        }
    }
    return new_start;
}
