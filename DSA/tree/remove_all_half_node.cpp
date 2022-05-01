/**
 * Definition for binary tree
 * struct TreeA {
 *     int val;
 *     TreeA *left;
 *     TreeA *right;
 *     TreeA(int x) : val(x), left(0), right(0) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* A) 
{
    if (A == 0)
        return 0;

        A->left = solve(A->left);
        A->right = solve(A->right);

        if (A->left == 0 && A->right == 0)
        return A;
        if (A->left == 0) 
        return A->right;
        if (A->right == 0) 
        return A->left;
        return A;
}
