int solve(int x, int y, vector<string>&A, int n, int m)
{
    int X[8]={0,-1,-1,-1,0,1,1,1};
    int Y[8]={1,1,0,-1,-1,-1,0,1};
    int c=0;
    for(int i=0;i<8;i++)
    {
        int new_x=x;
        int new_y=y;
        while(new_x<n && new_y<m && new_x>=0 && new_y>=0)
        {
            new_x+=X[i];
            new_y+=Y[i];
            if(new_x<n && new_y<m && new_x>=0 && new_y>=0 && A[new_x][new_y]=='1')
            {
                c++;
                break;
            }
        }
    }
    return c;
}

vector<vector<int> > Solution::queenAttack(vector<string> &A) {
    int n=A.size();
    if(n==0)
    return {};
    int m=A[0].length();
    if(m==0)
    return {};
    vector<vector<int>>res(n,vector<int>(m));
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    res[i][j]=solve(i,j,A,n,m);
    
    return res;
}
