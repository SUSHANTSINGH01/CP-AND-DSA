/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int Solution::minDepth(TreeNode* A)
{
    if( A->left == NULL && A->right == NULL )
    return 1;

    int h1=INT_MAX;
    int  h2=INT_MAX;

    if(A->left != NULL )
    h1=minDepth(A->left )+1;

    if(A->right != NULL )    
    h2=minDepth(A->right)+1;

    return min( h1, h2 );
}
