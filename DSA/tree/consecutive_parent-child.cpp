/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solve(TreeNode *A,int &c)
 {
     if(A==NULL)
     return;

     if(A->left)
     {
         if(abs(A->val-A->left->val)==1)
         c++;
         solve(A->left,c);
     }
     if(A->right)
     {
         if(abs(A->val-A->right->val)==1)
         c++;
         solve(A->right,c);
     }
     return ;
 }
int Solution::consecutiveNodes(TreeNode* A) 
{
    int c=0;
    solve(A,c);
    return c;

}
