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
    
    TreeNode* solve(TreeNode* root, int val)
    {
        if(root==NULL)
        return new TreeNode(val);
        

        if(val<=root->val)
        root->left=solve(root->left, val);
        else
        root->right=solve(root->right, val);
        
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* res=0;
        int n=preorder.size();
        for(int i=0;i<n;i++)
        res=solve(res,preorder[i]);
        return res;
    }
};
