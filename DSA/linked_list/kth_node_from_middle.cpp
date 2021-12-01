/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) 
{
    ListNode* head=A;
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    
    int n=c/2 + 1;

    if(n>B)
    {
        int a= (n-B-1);
        while(a--)
        A=A->next;
    
       return A->val;
    }
    return -1;
}

