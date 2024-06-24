// Latest One

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                slow=head;
                while(fast!=slow)
                {
                    fast=fast->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        return NULL; 
    }
};


// Old one


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        if(!A) 
        return 0;
        ListNode* fast=A;
        ListNode *slow=A;
        
        while(fast->next and fast->next->next) 
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow) 
            { 
                
                slow=A;
                while(fast!=slow) 
                {
                    fast=fast->next;
                    slow=slow->next;
                }
                return fast;
            }
        }
        return 0;
    
}
