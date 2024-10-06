struct Node *insert(struct Node *head, int data) {
    // Code here
    
    Node *new_head=new Node(data);
    new_head->npx=head;
    head=new_head;
    
}

vector<int> getList(struct Node *head) {
    // Code here
    
    vector<int>vec;
    
    while(head){
        vec.push_back(head->data);
        head=head->npx;
    }
    
    return vec;
    
}
