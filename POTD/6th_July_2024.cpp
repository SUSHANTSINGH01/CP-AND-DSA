class Solution {
  public:

    
    Node * prev = NULL;
    void solve(Node *root){
        if(!root)
        return ;
        
        solve(root->left);
        
        if(prev)
        prev->next=root;
        
        prev = root;
        solve(root->right);
    }
    void populateNext(Node *root) {
        // code here
        solve(root);
    }
};
