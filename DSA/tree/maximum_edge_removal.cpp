int dfs(vector<int> g[], int u, bool visit[], int& res)
{
    visit[u]=true;
    int curr_node=0;
 
   // cout<<g[u].size()<<endl;
    for (int i=0; i<g[u].size(); i++)
    {
       
        int v=g[u][i];
        if (!visit[v])
        {
            int sub_count=dfs(g, v, visit, res);
            
            if (sub_count%2==0)
            res++;
            else
            curr_node+=sub_count;
        }
    }
    return (curr_node+1);
}
int Solution::solve(int A, vector<vector<int> >&B) 
{
    int n=A;
    bool visit[n+1];
    vector<int>vec[n+2];
    
    //cout<<B.size();
    for(int i=0;i<B.size();i++)
    {
        //cout<<B[i][0]<<" "<<B[i][1]<<endl;
        vec[B[i][0]].push_back(B[i][1]);
        vec[B[i][1]].push_back(B[i][0]);
    }
    
    for(int i=0; i<=n; i++)
    visit[i]=false;
 
    int res=0; 
    dfs(vec, 1, visit, res);
 
    return res;
}
