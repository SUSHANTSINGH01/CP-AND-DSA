class BSTIterator {
public:
    vector<int> ans;
    void inorder(TreeNode *root,vector<int> &ans)
    {
        if(root==0)
            return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans); 
    }
    
    BSTIterator(TreeNode* root) 
    {
        inorder(root,ans);
        
    }
    
    int next() {
        int res=ans.front();
        ans.erase(ans.begin());
        return res;
    }
    
    bool hasNext() 
    {
        return ans.size()>0;
    }
};
