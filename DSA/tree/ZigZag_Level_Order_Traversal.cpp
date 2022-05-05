/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) 
{
    queue<TreeNode *>q;
    vector<vector<int>>res;

    

    if(A==0)
    return res;
    
    vector<int>v;
    v.push_back(A->val);
    res.push_back(v);

    q.push(A);
    int c=0;
    while(!q.empty())
    {
        int n=q.size();
        c++;
        vector<int>v;
        while(n--)
        {
            TreeNode *temp=q.front();
            
            if(temp->left!=0)
            {
               q.push(temp->left);
               v.push_back(temp->left->val);
            }

            if(temp->right!=0)
            {
               q.push(temp->right);
               v.push_back(temp->right->val);
            }

            q.pop();
        }
        if(c%2==1)
        reverse(v.begin(),v.end());
        if(v.size()>=1)
        res.push_back(v);
    }
    return res;
}
