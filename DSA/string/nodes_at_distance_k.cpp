/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
    void dist(TreeNode* root, int k, vector<int>&res)
    {
        if(root==0) 
        return ;
        if(k==0) 
        res.push_back(root->val);
        else if(k>0) 
        {
            dist(root->left,k-1,res);
            dist(root->right,k-1,res);
        }
        return ;
    }
    int solve(TreeNode *r ,int t, int k, vector<int>&res)
    {
        if(r==0) 
        return -500005;
        if(r->val==t) 
        { 
            dist(r,k,res); 
            return -1; 
        }
        int ld=solve(r->left,t,k,res);
        if(k+ld>=0) 
        { 
            if(k+ld==0) 
            res.push_back(r->val);
            dist(r->right,k+ld-1,res); 
            return ld-1; 
        }
        int rd=solve(r->right,t,k,res);
        if(k+rd>=0) 
        { 
            if(k+rd==0) 
            res.push_back(r->val);
            dist(r->left,k+rd-1,res); 
            return rd-1; 
        }
        return -500005;
    }
	
vector<int> Solution::distanceK(TreeNode* A, int B, int C)
{
    vector<int>res;
    solve(A,B,C,res);
    return res;
}
