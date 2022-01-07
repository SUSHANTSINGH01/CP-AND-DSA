TreeNode* Solution::solve(TreeNode* A, TreeNode* B) 
{
        if (!A && !B) 
        return NULL;
        if (!A && B) 
        return B;
        if (A && !B) 
        return A;
        A->val = A->val + B->val;
        A->left = solve(A->left, B->left);
        A->right = solve(A->right, B->right);
        return A;
}
