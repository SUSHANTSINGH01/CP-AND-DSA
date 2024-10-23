int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        
        int k=0;
        int res=0;
        
        Node *head1 = head;
        while(head){
            k++;
            head=head->next;
        }
        k-=n;
        while(k--){
            head1=head1->next;
        }
        
        while(head1){
            res+=head1->data;
            head1=head1->next;
        }
        
        return res;
    }
