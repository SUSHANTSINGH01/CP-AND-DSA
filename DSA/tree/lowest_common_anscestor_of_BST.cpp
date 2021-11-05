Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
       if(root==0)
       return root;
      
      if(root->data==n1 || root->data==n2)
      return root;
      
      Node* left=LCA(root->left,n1,n2);
      Node* right=LCA(root->right,n1,n2);
      
      if(left!=0 && right!=0)
      return root;
      
      if(left==0)
      return right;
      
      else
      return left;
      
}
