/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int solve(TreeNode *root)
 {
     if(root==NULL)
     return 0;

     return max(solve(root->left),solve(root->right))+1;
 }
int Solution::maxDepth(TreeNode* A)
 {
     return solve(A);
}
