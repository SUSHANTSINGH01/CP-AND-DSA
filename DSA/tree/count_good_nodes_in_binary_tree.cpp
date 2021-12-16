
class Solution {
public:
    int ans=0;
    void co_good(TreeNode *root,int res)
    {
        if(!root)
        return ;
        
        if(root->val>=res)
        {
          res=max(res,root->val);
            ans++;
        }
        
        co_good(root->right,res);
        co_good(root->left,res);
        return ;
    }
    int goodNodes(TreeNode* root) 
    {
      if(!root->left && !root->right) 
      return 1;
      co_good(root,root->val);
        
        return ans;
    }
};
