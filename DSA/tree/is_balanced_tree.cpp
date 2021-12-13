/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


int height(TreeNode* root){

    if(root==NULL)
    return 0;
    return max(height(root->left), height(root->right))+1;
}
int Solution::isBalanced(TreeNode *A) 
{
    if(A == NULL)
    return 1;


    int l=height(A->left);
    int r=height(A->right);

    if(abs(l-r)<2 && isBalanced(A->left) && isBalanced(A->right))
    return 1;

    return 0;
}
