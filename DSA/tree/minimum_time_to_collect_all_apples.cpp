class Solution {
public:
     int dfs(vector<int> adj[], int cur, vector<bool>& apple, int dist, vector<bool> &vis) 
     {
        vis[cur]=1;
        int ans=0;
        for(auto a: adj[cur]) 
        {
            if(vis[a]) 
            continue;
			
			int temp=dfs(adj, a, apple, dist+1, vis);
			
            if(ans && temp) 
            ans-=dist;
            ans+=temp;
        }

        if(!ans) 
        return apple[cur]?dist:0;
        return ans;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) 
    {
        vector<int> adj[n];
        vector<bool> visited(n, false);
        for(auto a : edges) 
        {
            adj[a[1]].push_back(a[0]);
            adj[a[0]].push_back(a[1]);
        }
        return 2*dfs(adj, 0, hasApple, 0, visited);
    }
};
