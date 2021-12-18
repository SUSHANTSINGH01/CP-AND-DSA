class Solution{
  public:
  int i=0;
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
         root->data=v[i++];
         solve(root->right, v);
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int>ans;
        inorder(root, ans);
        sort(ans.begin(), ans.end());
        solve(root, ans);
        return root;
    }
};
