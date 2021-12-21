class Solution {
public:
   
    bool possibleBipartition(int n, vector<vector<int>>& dislikes)
    {
        vector<vector<int>> adj(n+1);
        vector<int>vis(n+1,0);
        queue<int> q;
        int m=dislikes.size();
        
        for(int i=0;i<m;i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        for(int i=1;i<=n;i++)
        {
            
            if(vis[i]==0)
            {
                q.push(i);
                vis[i]=1;
                while(!q.empty())
                {
                        int curr=q.front();
                        q.pop();
                        
                        for(auto &it:adj[curr])
                        {
                            if(vis[it]==0)
                            {
                               vis[it]=-vis[curr];
                               q.push(it);
                            }
                            else
                            {
                                 if(vis[it]==vis[curr])
                                 return 0;
                            }
                        }
                }
            }
        }
        return 1;
    }
};
