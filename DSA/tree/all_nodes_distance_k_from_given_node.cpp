

// Optimized Solution


class Solution {
public:
    void makingAdjList(vector<int>adj[],TreeNode* root)
    {
        if(!root)
        return;

        if(root->left)
        {
            adj[root->val].push_back(root->left->val);
            adj[root->left->val].push_back(root->val);
            makingAdjList(adj,root->left);
        }
        if(root->right)
        {
            adj[root->val].push_back(root->right->val);
            adj[root->right->val].push_back(root->val);
            makingAdjList(adj,root->right);  
        }
    }

    vector<int> findNodes(vector<int> adj[],int k,int targetValue,vector<int> res)
    {
        queue<pair<int,int>>q;
        q.push({targetValue,0});
        vector<int>vis(500,0);
        vis[targetValue]=1;
        while(!q.empty())
        {
            int node=q.front().first;
            int c=q.front().second;

            if(c==k)
            res.push_back(node);

            c++;
            q.pop();
            
            for(int it:adj[node])
            {
                if(vis[it]!=1)
                {
                    vis[it]=1;
                    q.push({it,c});
                }
            }

            
        }
        return res;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>adj[505];
        vector<int>res;
        makingAdjList(adj,root);
        int targetValue=target->val;
        return findNodes(adj,k,targetValue,res);
    }
};


// Second Solution


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
    
