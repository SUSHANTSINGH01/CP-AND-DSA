const int maxs=100005;
vector<int>adj[maxs];
bool dfs(int src, vector<bool>&vis, vector<int>&vec, int val)
{
    vec[src]=val;
    vis[src]=true;
    int  n=adj[src].size();
    for(int i=0;i<n;i++)
    {
        if(!vis[adj[src][i]])
        {
            if(!dfs(adj[src][i],vis,vec,1-val))
            return false;
        }
        else if(vec[adj[src][i]]!=1-val)
        return false;
    }
    return true;
}

int Solution::solve(int A, vector<vector<int> > &B) 
{
    int m=B.size();
    vector<int>vec(A+1,-1);
    vector<bool>vis(A+1,false);
    
    for(int i=0;i<=A;i++)
    adj[i].clear();
    
    for(int i=0;i<m;i++)
    {
        adj[B[i][0]-1].push_back(B[i][1]-1);
        adj[B[i][1]-1].push_back(B[i][0]-1);
    }
    for(int i=1;i<=A;i++)
    {
        if(!vis[i])
        {
            if(!dfs(i,vis,vec,0))
            return false;
        }
    }
    return true;
}
