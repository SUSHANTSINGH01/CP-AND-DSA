/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void pre(TreeNode* root,vector<int>&res)
 {
     if(root==NULL)
     return ;

     res.push_back(root->val);
     pre(root->left,res);
     pre(root->right,res);
 }
int Solution::kthsmallest(TreeNode* A, int B)
{
    vector<int>res;
    pre(A,res);

    sort(res.begin(),res.end());
    return res[B-1];
}
