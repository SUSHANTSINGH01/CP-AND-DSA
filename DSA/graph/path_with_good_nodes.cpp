int dfs(int u,int par,int c,vector<int> &A, vector<vector<int>> &adj)
{
    int ans=0;
    int child=0;
    for(int it : adj[u])
    {
        if(it != par)
        {
            if(A[u-1]==0)
            ans+=dfs(it,u,c,A,adj);
            else
            ans+=dfs(it,u,c-1,A,adj);
            child++;
        }
    }

    if(child==0)
    {
        if(c>=1 || (c==0 && A[u-1]==0))
        return 1;
        return 0;
    }
    return ans;
}
int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) 
{
    
    int n=A.size();
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }
    
    return dfs(1,-1,C,A,adj);
}
