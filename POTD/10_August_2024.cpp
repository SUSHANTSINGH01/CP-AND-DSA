class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Your code here
        Node* curr=head;
        
        while(curr->next)
        curr=curr->next;
        
        Node* temp=head;
        curr->next=temp;
        
        while(k>1){
            k--;
            temp=temp->next;
            
        }
        
        curr=temp->next;
        temp->next=NULL;
        return curr;
    }
};
