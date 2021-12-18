class Solution{
  public:
   bool solve(Node* root,Node* root1)
    {
        if(root == NULL && root1 == NULL)
        return 1;
        else if(root == NULL || root1 == NULL)
        return 0;
        else if(root->data != root1->data) 
        return 0;
        else
        return (solve(root->left,root1->right) && solve(root->right,root1->left)) || 
        (solve(root->left,root1->left) && solve(root->right,root1->right));
    }
    bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
     if(solve(root1,root2))
     return 1;
     else
     return 0;
    }
};
