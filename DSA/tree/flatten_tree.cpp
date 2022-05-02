/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
   vector<TreeNode *>q;
    void solve(TreeNode *A)
    {
        if(A==0)
        return;
        
        q.push_back(A);
        
        solve(A->left);
        solve(A->right);
    }

    TreeNode * solve1(TreeNode * &A,int i,int n)
    {
        if(i==n)
        {
            TreeNode *temp=new TreeNode(q[i]->val);
            return temp;
        }
        
        A->left=0;
        A->right=solve1(q[i+1],i+1,n);
       
        return A;
    }
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    q.clear();
   if(A==0 || A->left==0 && A->right==0)
        return A;
        
        solve(A);
        TreeNode *tmp=A;
        TreeNode *root=solve1(tmp,0,q.size()-1);

        return root;
    
}
