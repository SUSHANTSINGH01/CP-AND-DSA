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
    unordered_map<string,int>mp;
    string solve(TreeNode* root,vector<TreeNode *>&res)
    {
        if(!root) 
        return "";

        string l=solve(root->left,res);
        string r=solve(root->right,res);

        string ans="(" + l + to_string(root->val) + r + ")";

        if(mp[ans]!=-1) 
        mp[ans]++;

        if(mp[ans]>1)
        {
            res.push_back(root);
            mp[ans]=-1;    
        }
        return ans;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) 
    {
        vector<TreeNode *>res;
        solve(root,res);
        return res;
    }
};
