TreeNode* solve(const vector<int> &A, int left, int right)
 {
    if(left>right)
    return NULL;
    
    int mid=(right+left)/2;
    
    TreeNode* root=new TreeNode(A[mid]);
    root->left=solve(A, left, mid-1);
    root->right=solve(A, mid+1, right);
    return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) 
{
    return solve(A, 0, A.size()-1);
}
