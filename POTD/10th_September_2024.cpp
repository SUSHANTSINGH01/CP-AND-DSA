class Solution {
  public :

    void dfs(char u,unordered_map<char,vector<char>>&adj, unordered_map<int,bool>&vis){
        vis[u]=1;
        for(auto v:adj[u]){
            if(!vis[v]){
                dfs(v,adj,vis);
            }
        }
    }
    
    int isCircle(vector<string> &arr) {
        // code here
        
        int n=arr.size();
        int c=0;
        int odd=0;
        unordered_map<int,bool>vis;
        unordered_map<char,vector<char>>adj;
        
        for(int i=0;i<arr.size();i++){
            
            int u=arr[i][0];
            int v=arr[i][arr[i].size()-1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    
        for(int i=0;i<n;i++){
            if(!vis[arr[i][0]]){
                dfs(arr[i][0],adj,vis);
                c++;
            }
        }
        
        for(auto i:adj){
            if(adj[i.first].size()&1)
            odd++;
        }
        
        if(c>1 || odd!=0)
        return 0;
        
        return 1;
        
    }
};
