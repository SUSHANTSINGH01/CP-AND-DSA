class Solution {
  public:
    Node *copyList(Node *head) {
        // Write your code here
        
        Node *start=head;
        Node *list=new Node(0);
        Node *list_head=list;
        unordered_map<Node*,Node*>mp;
        
        while(head)
        {
            Node *temp=new Node(head->data);
            list->next=temp;
            list=list->next;
            
            mp[head]=temp;
            head=head->next;
        }
        
        head=start;
        Node *random_list=list_head->next;
        Node *new_head=random_list;
        
        while(head)
        {
            random_list->random=mp[head->random];
            random_list=random_list->next;
            head=head->next;
        }
        
        return new_head;
    }
};
