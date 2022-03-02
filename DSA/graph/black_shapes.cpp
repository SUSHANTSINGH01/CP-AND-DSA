void dfs(vector<string> A, int i, int j, vector<vector<bool>>&vis, vector<vector<bool>>& check)
{
    if(i<0 || i>=A.size() || j<0 || j>= A[0].size())
    return;
    
    if(check[i][j]==false || vis[i][j])
    return;
    
    vis[i][j]=true;
    
    dfs(A,i-1,j,vis,check);
    dfs(A,i+1,j,vis,check);
    dfs(A,i,j-1,vis,check);
    dfs(A,i,j+1,vis,check);
}

int Solution::black(vector<string> &A) 
{
    int n=A.size();
    if(n == 0)
    return 0;
    int m=A[0].size();
    vector<vector<bool>>check(n+1, vector<bool>(m+1, false));
    vector<vector<bool>>vis(n+1, vector<bool>(m+1, false));
    
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    if(A[i][j]=='X')
    check[i][j]=true;

    int res=0;
    
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    if(A[i][j]=='X' && !vis[i][j])
    {
        dfs(A,i,j,vis,check);
        res++;
    }

    return res;    
}
