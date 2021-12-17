/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
     void parents(map<TreeNode *,TreeNode *>&par,TreeNode *root)
    {
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *curr=q.front();
            q.pop();
            if(curr->left)
            {
                par[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right)
            {
                par[curr->right]=curr;
                q.push(curr->right);
            }
        }
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        map<TreeNode *,TreeNode *>parent;
        parents(parent,root);
        vector<int>ans;
        map<TreeNode *,bool>vis;
        vis[target]=1;
        int i;
        queue<TreeNode *>qu;
        qu.push(target);
        int l=0;
        while(!qu.empty())
        {
            int n=qu.size();
            if(l==k)
            break;
            while(n--)
            {
                TreeNode *curr=qu.front();
                qu.pop();
                
                if(curr->left && !vis[curr->left])
                {
                    vis[curr->left]=1;
                    qu.push(curr->left);
                }
                if(curr->right && !vis[curr->right])
                {
                    vis[curr->right]=1;
                    qu.push(curr->right);
                }
                if(parent[curr] && !vis[parent[curr]])
                {
                    vis[parent[curr]]=1;
                    qu.push(parent[curr]);
                }
                
            }
            l++;
        }
        
        
        while(!qu.empty())
        {
            ans.push_back(qu.front()->val);
            qu.pop();
        }
        return ans;
    }
};
    
