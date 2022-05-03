/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool is_pres(TreeNode* root, int val)
{
    if(root==0)
    return false;
    if(root->val == val)
    return true;
    if((root->left && is_pres(root->left, val)) || (root->right && is_pres(root->right, val)))
    return true;
    
    return false;
}
int solve(TreeNode *A,int B, int C)
{
        if(A==0)
        return -1;
        
        if(A->val==B || A->val==C) 
        return A->val;
    
        int right_subtree=solve(A->right, B, C);
        int left_subtree=solve(A->left, B, C);
      
        if(right_subtree==-1) 
        return left_subtree;
        else if(left_subtree==-1) 
        return right_subtree;
        else 
        return A->val;
}
int Solution::lca(TreeNode* A, int B, int C)
{
         if(is_pres(A, B)==0 || is_pres(A, C)==0)
         return -1;
        
        return solve(A,B,C);
}
