class Solution {
public:
     int solve(int i, vector<vector<int>>& v, vector<int>&adj,vector<bool>&vis)
    {
        
        if(adj[i]!=-1)
        return adj[i];
        
        if(vis[i]) 
        return 0;
        
        vis[i]=true;
        if(v[i].size()==0) 
        return adj[i]=1;
        
        for(int it:v[i])
        {
            if(solve(it, v,adj,vis)==0)
            return adj[i]=0;
        }
        return adj[i]=1;
    }
   
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        vector<int>adj(n,-1);
        vector<bool>vis(n,0);
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i]) 
            solve(i,graph,adj,vis);
        }
        
        for(int i=0;i<n;i++)
        {
            if(adj[i]==1) 
            ans.push_back(i);
        }
        return ans;
    }
};
