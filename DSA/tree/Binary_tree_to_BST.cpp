class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    
    int i=0;
    void inorder(Node* root, vector<int>&vec) 
    {
        if(!root) 
        return;
        
        inorder(root->left,vec);
        vec.push_back(root->data);
        inorder(root->right,vec);
    }
    void solve(Node *root,vector<int>&vec)
    {
         if(!root) 
         return;
         
         solve(root->left,vec);
         root->data=vec[i++];
         solve(root->right,vec);
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        
        vector<int>res;
        inorder(root,res);
        sort(res.begin(),res.end());
        solve(root,res);
        return root;
    }
};
