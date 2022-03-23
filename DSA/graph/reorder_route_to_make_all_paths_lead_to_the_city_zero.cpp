class Solution {
public:
    void solve(int node, vector<pair<int, int>> adj[], int &res, bool vis[])
    {
        vis[node]=1;
        for(int v=0; v<adj[node].size(); v++) 
        {
            
                if(vis[adj[node][v].first]==0) 
                {
                    if(adj[node][v].second==1) 
                    res++;
                    solve(adj[node][v].first, adj, res, vis);
                }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) 
    {
          int res=0;
          bool vis[50005] = {false};
          vector<pair<int, int>>adj[n+1];
           for(int i = 0; i < connections.size(); ++i) 
           {
                adj[connections[i][0]].push_back({connections[i][1], 1});
                adj[connections[i][1]].push_back({connections[i][0], -1});
           }
        
        solve(0, adj, res, vis);
        return res;
    }
};
