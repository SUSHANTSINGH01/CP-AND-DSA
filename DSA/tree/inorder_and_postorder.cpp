/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
  TreeNode* solve(vector<int>&inorder, vector<int>&preorder,int l,int r,int &post,unordered_map<int,int> &mp)
    {
        if(l>r)
        return 0;
        
        TreeNode* root=new TreeNode(preorder[post--]);
        
        if(l==r)
        return root;
        
        int k=mp[root->val];
        
        root->right=solve(inorder,preorder,k+1,r,post,mp);
        root->left=solve(inorder,preorder,l,k-1,post,mp);
        
        return root;
    }
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) 
{

        int n=A.size();
        int post=B.size()-1;

        unordered_map<int,int>mp;
    
        
        for(int i=0;i<n;i++)
        mp[A[i]]=i;
        
        return solve(A,B,0,n-1,post,mp);
}
