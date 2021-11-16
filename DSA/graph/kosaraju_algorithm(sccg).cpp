class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
   void dfs(int S, vector<int> adj[],vector<bool> &visited)
   {
	    visited[S]=true;
        
        for (auto it : adj[S])
        {
            if (visited[it] == 0)
                dfs(it, adj, visited);
        }
	}
	
	void solve1(vector<int> adj[], vector<bool> &visited, int curr, stack<int> &S) // order
	{
	    visited[curr] = true;
        
        for (auto it : adj[curr])
        {
            if (visited[it] == false)
                solve1(adj, visited, it, S);
        }
        
        S.push(curr);
	}
	
	
	void solve2(int V, vector<int> adj[], vector<int> adj2[]) // transpose
	{
        for (int i=0;i<V;i++)
        {
            for (auto it : adj[i])
            adj2[it].push_back(i);
        }
    }
	
    int kosaraju(int V, vector<int> adj[])
    {
        stack<int>st;
        vector<bool>visited(V,false);
        
        for(int i=0;i<V;i++)
        {
            if(visited[i] == false)
            solve1(adj, visited, i, st);
            
        }
       
        
        vector<int>adj2[V];
        solve2(V, adj, adj2);
        
        
        int ans = 0;
        visited = vector<bool>(V,false);
        
        while(!st.empty()){
            int t = st.top();
            st.pop();
            if(visited[t]==false)
            {
                dfs(t,adj2,visited);
                ans++;
            }
        }
        return ans;
    }
};
