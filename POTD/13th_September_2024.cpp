class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node==NULL){
            return ;
        }
        
        swap(node->right,node->left);
        mirror(node->left);
        mirror(node->right);
    }
};
