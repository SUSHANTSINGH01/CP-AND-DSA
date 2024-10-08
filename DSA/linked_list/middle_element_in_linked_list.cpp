// first Approach

ListNode* middleNode(ListNode* head) 
    {
        int c=1;
        ListNode *mid=head;
        while(head->next)
        {
            if(c & 1) 
            mid=mid->next;
            c++;
            head=head->next;
        }
        return mid;
    }


// second Approach (Optimized)

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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next!=NULL)
        return slow->next;
        return slow;
    }
};
