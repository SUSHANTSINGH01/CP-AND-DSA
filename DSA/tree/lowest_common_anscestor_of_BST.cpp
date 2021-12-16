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


// leetcode solution

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(!root || root==p || root==q) 
        return root;
    
        TreeNode *right_subtree=lowestCommonAncestor(root->right, p, q);
        TreeNode *left_subtree=lowestCommonAncestor(root->left, p, q);
      
        if(!right_subtree) 
        return left_subtree;
        else if(!left_subtree) 
        return right_subtree;
        else 
        return root;
    }
};
