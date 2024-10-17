class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        
        Node * head1=new Node(0);
        Node * head2=new Node(0);
        Node * temp1=head1;
        Node * temp2=head2;
    
        while(head!=NULL){
            temp1->next=head;
            temp1=temp1->next;
            head=head->next;
           
            if(head!=NULL){
                temp2->next=head;
                temp2=temp2->next;
                head=head->next;
            }
        }
        
        temp1->next=NULL;
        temp2->next=NULL;
      
        return {head1->next,head2->next};
        
    }
};
