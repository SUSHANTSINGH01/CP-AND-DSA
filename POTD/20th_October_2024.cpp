class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        // code here
        
        priority_queue<int, vector<int>, greater<int>>pq;
        DLLNode *st = head;
        DLLNode *res=st;
        while(k>=0){
            pq.push(head->data);
            head=head->next;
            k--;
        }
         
        while(head){
            st->data=pq.top();
            st=st->next;
            pq.pop();
            pq.push(head->data);
            head=head->next;
        }
        
        while(!pq.empty()){
            st->data=pq.top();
            st=st->next;
            pq.pop();
        }
        return res;
        
    }
};
