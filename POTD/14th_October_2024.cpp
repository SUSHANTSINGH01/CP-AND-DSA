class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        int res=0;
        while(head){
            res++;
            head=head->next;
        }
        return res;
    }
};
