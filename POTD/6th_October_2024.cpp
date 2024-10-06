class Solution {
  public:
    // Function to find the number of islands.
    void solve(int x, int y,int n,int m,vector<vector<char>>&mat)
    {
        mat[x][y]='0';
        int dx[]={1, 1, 0, -1, 0, 1, -1, -1};
        int dy[]={0, 1, 1, -1, -1, -1, 0, 1};
        for(int i=0;i<8;i++)
        {
            int x_dir=x+dx[i];
            int y_dir=y+dy[i];
            if(x_dir>=0 && x_dir<n && y_dir>=0 && y_dir<m && mat[x_dir][y_dir]=='1')
            solve(x_dir,y_dir,n,m,mat);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int res=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        if(grid[i][j]!='0')
        solve(i,j,n,m,grid),
        res++;
            
        return res;
    }
};
