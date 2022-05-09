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
       vector<int>res;
       if(A == NULL)
        return res;
 
        queue <TreeNode*> q;
        q.push(A);
    
        while(!q.empty())
        {
            int size = q.size();
            vector <int> answer;
    
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                
                while(temp)
                {
                    answer.push_back(temp->val);
    
                    if(temp->left)
                        q.push(temp->left);
    
                    temp = temp->right;
                }
            }
            res.insert(res.end(), answer.begin(), answer.end());
        }
        return res;

}
