/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
bool solve(TreeNode* root,TreeNode* root1)
{
    if(root == NULL && root1 == NULL)
    return 1;
    else if(root == NULL || root1 == NULL)
    return 0;
    else if(root->val != root1->val) 
    return 0;
    else
    return solve(root->left,root1->right) && solve(root->right,root1->left);
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) 
    {
      if(solve(root->left,root->right))
      return 1;
        else
            return 0;
   
    }
};
