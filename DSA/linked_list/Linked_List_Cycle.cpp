/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
         while(head){
            if(head->next!=NULL && head->next->val==INT_MAX)
            return 1;

            head->val=INT_MAX;
            head=head->next;
         }
         return 0;
    }
};
