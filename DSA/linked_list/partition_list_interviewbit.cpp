/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) 
{
    vector<int>vec;
    
    ListNode *temp=A;

    while(temp)
    {
        vec.push_back(temp->val);
        temp=temp->next;
    }

    ListNode *head=new ListNode(0);
    int n=vec.size();
    ListNode *start=head;
    for(int i=0;i<n;i++)
    {
        if(vec[i]<B)
        {
            ListNode *add=new ListNode(vec[i]);
            head->next=add;
            head=head->next;
        }

    }
     for(int i=0;i<n;i++)
    {
        if(vec[i]>=B)
        {
            ListNode *add=new ListNode(vec[i]);
            head->next=add;
            head=head->next;
        }
        
    }
    return start->next;
}


// second approach

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) 
{
        if(A==0 || A->next==0)
        return A;
        
        ListNode *head1=0;
        ListNode *tail1=0;
        ListNode *head2=0; 
        ListNode *tail2=0;
        
        ListNode *curr=A;
        
        while(curr)
        {
            if(curr->val<B)
            {
                if(head1==0)
                {
                    head1=curr;
                    tail1=curr;
                }
                else
                {
                    tail1->next=curr;
                    tail1=tail1->next;
                }
            }
            else
            {
                if(head2==0)
                {
                    head2=curr;
                    tail2=curr;
                }
                else
                {
                    tail2->next=curr;
                    tail2=tail2->next;
                }
            }
            curr=curr->next;
        }
        
        if(tail2)
        tail2->next=0;
        
        if(head1==0)
        return head2;
        
        tail1->next=head2;
        
        return head1;
}
