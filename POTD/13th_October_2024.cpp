class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        int f=false;
        while(head){
            if(head->next){
                head->next=head->next->next;
                head=head->next;
            }else
            break;
        }
        return ;
    }
};
