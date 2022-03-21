void solve1(int n,int m,queue<pair<int,int>>&q,vector<vector<int>>&A,vector<vector<bool>>& vis)
{
    int dx[]={0,0,1,-1};
    int dy[]={1,-1,0,0};
    while(!q.empty())
    {
        auto temp=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int x=dx[i]+temp.first;
            int y=dy[i]+temp.second;
            if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==false && A[temp.first][temp.second]<=A[x][y])
            {
                q.push({x,y});
                vis[x][y]=true;
            }
        }
    }
    return;
}

int Solution::solve(vector<vector<int> > &A) 
{
    int n=A.size();
    int m=A[0].size();
    vector<vector<bool>>blue(n,vector<bool>(m,false));
    vector<vector<bool>>red(n,vector<bool>(m,false));
    queue<pair<int,int>>q1;
    queue<pair<int,int>>q2;
    int res=0;

    if(n==0)
    return 0;

    for(int i=0;i<n;i++)
    {
        q2.push({i,m-1});
        blue[i][m-1]=true;
        q1.push({i,0});
        red[i][0]=true;
    }
    for(int i=0;i<m;i++)
    {
        q2.push({n-1,i});
        blue[n-1][i]=true;
        q1.push({0,i});
        red[0][i]=true;
    }
    solve1(n,m,q1,A,red);
    solve1(n,m,q2,A,blue);
    
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    if(blue[i][j] && red[i][j])
    res++;
    
    return res;
}
