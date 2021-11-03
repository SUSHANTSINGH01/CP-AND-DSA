class Solution {
public:
     int pred(TreeNode* root)
    {
        if(root->right!=0) 
        return pred(root->right);
        else 
        return root->val;
        
    }
    
    int succ(TreeNode* root)
    {
        if(root->left!=0) 
        return succ(root->left);
        else 
        return root->val;
        
    }
    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if(root==NULL) 
        return root;
        if(key<root->val) 
        root->left=deleteNode(root->left, key);
        else if(key>root->val) 
        root->right=deleteNode(root->right, key);
        else
        {
            if(!root->left && !root->right) 
            root = NULL;
            else if(root->left) 
            {
                root->val = pred(root->left);
                root->left = deleteNode(root->left, root->val);
            }
            else if(root->right) 
            {
                root->val = succ(root->right);
                root->right = deleteNode(root->right, root->val);
            }
        }
        return root;
    }
};
        
