// Optimized Solution

class Solution {
public:
    ListNode *reverse(ListNode *head)
    {
        if(head==NULL || head->next==NULL)
        return head;

        ListNode *temp=reverse(head->next);
        head->next->next=head;
        head->next=NULL;

        return temp;
    }
    bool isPalindrome(ListNode* head) 
    {
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *half=reverse(slow);
        
        
        while(half && head)
        {
            if(half->val!=head->val)
            return 0;
            
            half=half->next;
            head=head->next;
        }
        return 1;
    }
};


// Brute Force



int Solution::lPalin(ListNode* A) 
{
    vector<int>vec;
    while(A)
    {
        vec.push_back(A->val);
        A=A->next;
    }

    int n=vec.size();
    for(int i=0;i<n/2;i++)
    if(vec[i]!=vec[n-1-i])
    return 0;

    return 1;
}
