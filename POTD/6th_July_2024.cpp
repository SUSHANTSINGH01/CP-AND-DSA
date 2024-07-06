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


// Java Solution


class Solution {
    Node prev = null;
    void solve(Node root){
        if(root==null)
        return ;
        
        solve(root.left);
        
        if(prev!=null)
        prev.next=root;
        
        prev = root;
        
        solve(root.right);
    }
    public void populateNext(Node root) {
        // code here
        solve(root);
    }
}
