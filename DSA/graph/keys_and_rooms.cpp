class Solution {
public:
    void solve(int i,vector<vector<int>>& adj,vector<bool>&vis)
    {
        if(vis[i]==true)
        return ;
        vis[i]=true;
        
        for(auto it:adj[i])
        {
            if(it!=i && vis[it]!=true)
            solve(it,adj,vis);
        }
        return ;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        vector<vector<int>>adj;
        
        int n=rooms.size();
        vector<bool>vis(n+1,0);
        adj.resize(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<rooms[i].size();j++)
            adj[i].push_back(rooms[i][j]);
        }
        
        solve(0,adj,vis);
        for(int i=0;i<n;i++)
        if(!vis[i])
            return false;
        
        return true;
    }
};
