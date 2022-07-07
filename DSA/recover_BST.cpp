/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(0), right(0) {}
 * };
 */
vector<int> Solution::recoverTree(TreeNode* A) 
{
        vector<int>res;
        stack<TreeNode*>st;
        TreeNode *first=0;
        TreeNode *last=0;
        TreeNode *curr=A;
        TreeNode *prev=0;
        
        bool is_true = false;
    
        while(!is_true)
        {
            if(curr)
            {
                st.push(curr);
                curr=curr->left;
            }
            else
            {
                curr=st.top();
                st.pop();
                if(prev)
                {
                    if(prev->val>curr->val)
                    {
                        if(first==0)
                        first=prev;
                        
                        last=curr;
                    }    
                    
                }
                prev=curr;
                curr=curr->right;
            }
            if(st.empty() &&  curr==0)
            is_true=1; 
        }
        res.push_back(first->val);
        res.push_back(last->val);
    
        sort(res.begin(), res.end());
        return res;
}
