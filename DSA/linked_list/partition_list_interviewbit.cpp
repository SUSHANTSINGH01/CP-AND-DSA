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
