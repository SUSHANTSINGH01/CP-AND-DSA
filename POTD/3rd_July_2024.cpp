class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        Node * cloneHead = new Node(0); 
        cloneHead->next=head;
        Node *prev = cloneHead;
        head=prev;
        bool f=0;
        while(cloneHead){
            
           bool f=0;
           
           while(cloneHead && cloneHead->next && cloneHead->data == cloneHead->next->data){
                f=1;
                cloneHead->next=cloneHead->next->next;
           }
           
           
          if(f==0 && prev!=cloneHead){
              prev->next=cloneHead;
              prev=prev->next;
          }
           
           cloneHead=cloneHead->next;
           
           if(f==0)
           prev->next=NULL;
           
        }
        
        return head->next;
    }
};
