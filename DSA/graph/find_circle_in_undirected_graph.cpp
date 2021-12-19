class Solution {
public:
    vector<int>parent;
    int find_parent(int u)
    {
         if(parent[u] == u)
         return u; 
         return parent[u] = find_parent(parent[u]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        int n=edges.size();
        for(int i=0;i<=n;i++) 
        parent.push_back(i);
        
        for(auto it : edges)
        {
            int p1=find_parent(it[0]);
            int p2=find_parent(it[1]);
            if(p1!=p2) 
            parent[p1]=p2;
            else 
            return it;
        }
        return {};
    }
};
