class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        int n1=edges.size();
        unordered_map<int,vector<int>>mp; 
        vector<bool>vis(n,false);
        queue<int>q;
        q.push(source);
        
        for(int i=0;i<n1;i++)
        {
            mp[edges[i][1]].push_back(edges[i][0]);
            mp[edges[i][0]].push_back(edges[i][1]);
        }
                
        vis[source]=true; 
        while(!q.empty()) 
        {
            int temp=q.front();
            q.pop();
            if(temp==destination)
            return true; 
            for(auto node:mp[temp])
            {
                if(!vis[node])
                {
                    vis[node]=true; 
                    q.push(node);
                }
            }
        }
        return false;
    }
};
