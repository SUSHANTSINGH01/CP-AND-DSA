/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void postorder(TreeNode *root,vector<int>&a)
 {
     if(!root)
     return ;

     postorder(root->left,a);
     postorder(root->right,a);
     a.push_back(root->val);
 }

vector<int> Solution::postorderTraversal(TreeNode* A) 
{
    vector<int>v;
    postorder(A,v);
    return v;
}
