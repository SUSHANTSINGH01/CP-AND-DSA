class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        vector<bool>vis(n,0);     
        int n1=edges.size();
        vector<int>res;
        
        for(int i=0;i<n1;i++)
        vis[edges[i][1]]=1;
       
        
        for(int i=0;i<n;i++)
        if(!vis[i])
        res.push_back(i);
        
        return res;
    }
};
