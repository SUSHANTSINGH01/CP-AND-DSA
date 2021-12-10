/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
TreeNode* Solution::invertTree(TreeNode* A) 
{
    if(A==NULL)
    return NULL;


    invertTree(A->left);
    invertTree(A->right);

    TreeNode* temp=A->right;
    A->right=A->left;
    A->left=temp;
        
    return A;
}
