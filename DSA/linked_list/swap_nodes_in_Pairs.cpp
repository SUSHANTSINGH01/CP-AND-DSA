/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *solve(ListNode *head)
    {
        if(head==0)
        return 0;
        
        ListNode* curr_next=head->next; 
        if(curr_next)
        {
            head->next=solve(curr_next->next);
            curr_next->next=head;
            return curr_next;
        }
        return head; 
    
    }
    ListNode* swapPairs(ListNode* head) 
    {
        return solve(head);
    }
};
