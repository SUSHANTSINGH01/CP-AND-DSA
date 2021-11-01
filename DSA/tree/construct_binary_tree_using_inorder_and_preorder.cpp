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
   TreeNode* solve(vector<int>&preor,vector<int>&inor,int l,int r,int &pre,unordered_map<int,int> &mp)
    {
        if(l>r)
        return 0;
        
        TreeNode* root=new TreeNode(preor[pre++]);
        
        if(l==r)
        return root;
        
        int k=mp[root->val];
        
        root->left=solve(preor,inor,l,k-1,pre,mp);
        root->right=solve(preor,inor,k+1,r,pre,mp);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pre = 0;
        unordered_map<int,int>mp;
        
        for(int i=0;i<inorder.size();i++)
        mp[inorder[i]]=i;
        
        return solve(preorder,inorder,0,inorder.size()-1,pre,mp);
    }
};
