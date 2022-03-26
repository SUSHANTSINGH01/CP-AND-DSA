/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
    vector<int>res;
    void inorder(TreeNode *root,vector<int> &res)
    {
        if(root==0)
        return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res); 
    }
    

BSTIterator::BSTIterator(TreeNode *root) {
     inorder(root,res);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
     
       return res.size()>0;
       
}

/** @return the next smallest number */
int BSTIterator::next() {

    
        int ans=res.front();
        res.erase(res.begin());
        return ans;

}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
