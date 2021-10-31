/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int left=0;
     int right=0,ans=0;
    
    int solve(TreeNode *root)
    {
        if(root==NULL)
        return 0;
        return 1+max(solve(root->left),solve(root->right));
    }
    
     
    int diameterOfBinaryTree(TreeNode* root) 
{
       
        if(root==NULL) 
        return 0;
       
        left=solve(root->left);
        right=solve(root->right);
        ans=max(ans,left+right);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        
        return ans;
        
    }
};
