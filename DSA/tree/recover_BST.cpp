class Solution {
public:
    vector<int>ans;
    int i=0;
    void preorder(TreeNode *root)
    {
        if(root==0)
        return ;
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    void recover(TreeNode *root)
    {
        if(root==0)
        return ;
        recover(root->left);
        root->val=ans[i++];
        recover(root->right);
    }
    void recoverTree(TreeNode* root) 
    {
        preorder(root);
        sort(ans.begin(),ans.end());
        recover(root);
    }
};
