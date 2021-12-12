/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) 
{
    
    vector<int>ans;
    queue<TreeNode*>q;
    q.push(A);
    while(!q.empty())
    {
        int n=q.size();
        vector<int>temp;
        while(n--)
        {
            TreeNode* t=q.front();
            temp.push_back(t->val);
            q.pop();
            if(t->left)
            q.push(t->left);
            if(t->right)
            q.push(t->right);
        }
        for(int i=temp.size()-1;i>=0;i--)
        ans.push_back(temp[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
