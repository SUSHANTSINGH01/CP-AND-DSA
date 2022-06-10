int solve1(int u,int par, vector<int> adj[],int &res)
{
    vector<int> v;
 
    for(auto child:adj[u])
    if(child!=par)
    v.push_back(solve1(child, u, adj, res));
    
    int n=v.size();
    if(n==0)
    {
        res=max(res,1);
        return 1;
    }
    if(n==1)
    {
        res=max(res,v[0]+1);
        return v[0]+1;
    }
    sort(v.rbegin(), v.rend());
 
    res=max(res,v[0]+v[1]+1);
    return v[0]+1;
}
int Solution::solve(vector<int> &A) 
{
    int n=A.size();
    vector<int>adj[n];
 
    for(int i=0;i<n;i++)
    {
        if(A[i]==-1)
        continue;
 
        adj[A[i]].push_back(i);
        adj[i].push_back(A[i]);
    }
 
    int res=INT_MIN;
    solve1(0,-1,adj,res);
 
    return res-1;
}
