class Solution {
  public:
    Node *partition(Node *head, Node *last){
        Node *curr=head;
        Node *next=head->next;
        while(next!=last){
            if(next->data<head->data){
                curr=curr->next;
                swap(next->data,curr->data);
            }
            next=next->next;
        }
        swap(curr->data,head->data);
        return curr;
    }
    void Quick_Sort(Node *head, Node *last){
        if(head==last)
        return;
        Node *part=partition(head,last);
        Quick_Sort(head,part);
        Quick_Sort(part->next,last);
  }
    struct Node* quickSort(struct Node* head) {
        Quick_Sort(head,NULL);
        return head;
    }
};
