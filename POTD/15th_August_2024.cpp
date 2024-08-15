class Solution {
  public:
  
   Node* reverseList(Node* head){
       
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;  
            curr->next=prev;  
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    Node* addOne(Node* head) {
       
        head=reverseList(head);
        Node* curr=head;
        Node* prev=NULL;
        int carry=1;
        
        while(curr!=NULL){
            int sum=curr->data+carry;
            carry=sum/10;
            curr->data=sum%10;
            prev=curr;
            curr=curr->next;
        }
        
        if(carry==1) 
        prev->next=new Node(carry);
        return reverseList(head);;
    }
};
