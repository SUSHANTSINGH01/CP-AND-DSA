class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        
        Node *slow=head;
        Node *fast=head;
        int res=1;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            break;
        }
        
        if(!fast || !fast->next)
        return 0;
        
        while(slow!=fast->next)
        {
            res++;
            fast=fast->next;
        }
        
        return res;
    }
};
