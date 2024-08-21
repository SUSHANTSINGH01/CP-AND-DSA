class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        
        vector<int>adj[N];
        queue<int>q;
        vector<int>pth(N,-1);
        q.push(src);
        pth[src]=0;
        
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        while(!q.empty()){
            int node=q.front();
            for(auto it:adj[node]){
                if(pth[it]==-1){
                    pth[it]=pth[node]+1;
                    q.push(it);
                }
            }
            q.pop();
        }
        
        return pth;
    }
};
