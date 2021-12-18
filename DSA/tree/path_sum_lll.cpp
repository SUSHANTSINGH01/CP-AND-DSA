
class Solution {
public:
    int c=0;
     void solve(TreeNode *root, int target) 
     {
        if(root==0) 
        return;
        else if(target==root->val) 
        c++;
        
        solve(root->left,target-root->val);
        solve(root->right,target-root->val);
    }
    void count_path(TreeNode* root, int target) 
    {
        if(root==0) 
        return;
        
        else if((root->left==0) && (root->right==0) && (root->val!=target)) 
        return;
        
        solve(root, target);
        count_path(root->left, target);
        count_path(root->right, target);
    }
    int pathSum(TreeNode* root, int targetSum) 
    {
        count_path(root, targetSum);
        return c;
    } 
};
