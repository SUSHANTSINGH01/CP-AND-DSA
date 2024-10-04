class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        // code here
        
        Node *prev=NULL;
        Node *curr=head;
        Node *next=head;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev->next;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        // code here
        if(head->data==key){
           Node* new_head=head;
           while(new_head->next!=head) 
           new_head=new_head->next;
           
           new_head->next=head->next;
           return head->next;
        }
        
        Node* prev_head=head;
        Node* temp_head=head->next;
        
        while(temp_head!=head){
            if(temp_head->data==key){
                prev_head->next=temp_head->next;
                return head;
            }
            temp_head=temp_head->next;
            prev_head=prev_head->next;
        }
        
        return head;
    }
};
