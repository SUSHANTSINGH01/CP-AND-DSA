
void solve(int v, vector<bool> &vis,vector<vector<int>>vec)
{
   
    vis[v]=true;
    for (auto i=vec[v].begin(); i!=vec[v].end(); i++)
    if (!vis[*i])
    solve(*i, vis,vec);
    
}
 

int Solution::motherVertex(int A, vector<vector<int> > &B) 
{
    A++;
    vector<vector<int>>vec(A);
    
    for(int i=0;i<B.size();i++)
    vec[B[i][0]].push_back(B[i][1]);

    vector<bool>vis(A,false);
    int pos=0;
 
    for (int i=1; i<A; i++)
    {
        if(vis[i] == false)
        {
            solve(i, vis, vec);
            pos=i;
        }
    }
    fill(vis.begin(), vis.end(), false);
    solve(pos, vis, vec);
    for (int i=1; i<A; i++)
    if (vis[i] == false)
    return 0;
 
    return 1;
}
