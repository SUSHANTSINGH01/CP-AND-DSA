/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) 
{
        
        ListNode* curr=A;
        if(A==0 || A->next==0 || B==0) 
        return A;
        
        int c=1;
        while(curr->next!=0)
        {
            curr=curr->next;
            c++;
        }
        curr->next=A;          
        
        int n=c-B%c;
        while(n--)
        curr=curr->next;
        
        A=curr->next;
        curr->next=0;
        return A;
}
