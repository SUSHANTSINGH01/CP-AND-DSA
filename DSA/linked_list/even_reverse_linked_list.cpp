/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) 
{
    vector<int>ans;
    ListNode *root=A;
    int i=0;
    while(A)
    {
        if(A->next)
        {
        ans.push_back(A->next->val);
        A=A->next->next;
        }
        else
        A=A->next;
    }

    ListNode *start=new ListNode(0);
    ListNode *head=start;
    reverse(ans.begin(),ans.end());
    while(root)
    {
        i++;
        if(i%2==0)
        {
            ListNode *temp=new ListNode(ans[i/2-1]);
            start->next=temp;
            start=start->next;
            
        }
        else
        {
            start->next=root;
            start=start->next;
        }
        root=root->next;

    }

    return head->next;
}
