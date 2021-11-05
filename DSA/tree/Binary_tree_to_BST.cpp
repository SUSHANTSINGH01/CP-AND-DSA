class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node* root, vector<int>& v) 
    {
        if(root==0) 
        return ;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    void solve(Node *root, vector<int> &v)
    {
         if(root==0) 
         return ;
         solve(root->left, v);
         root->data=v.back();
         v.pop_back();
         solve(root->right, v);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>ans;
        inorder(root, ans);
        sort(ans.begin(), ans.end(), greater<int>());
        solve(root, ans);
        return root;
    }
};
