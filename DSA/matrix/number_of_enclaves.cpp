class Solution {
public:
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    
    int solve(vector<vector<int>>& grid, int x, int y)
    {
        grid[x][y]=0;
        int c=0;
        for(int i=0; i<4; ++i)
        {
            int x1=x+dx[i];
            int y1=y+dy[i];
            if(x1<0 || x1>=grid.size() || y1<0 || y1>=grid[0].size() || grid[x1][y1]==0) 
            continue;
            c+=1+solve(grid,x1,y1);
        }
        return c;
    }
    
    int numEnclaves(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j)
        if(i==0 || j==0 || i==n-1 || j==m-1)
        if(grid[i][j]==1) 
        solve(grid,i,j);
                
        int ans=0;
        for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j)
        if(grid[i][j]==1) 
        ans+=1+solve(grid,i,j);
            
        return ans;  
    }
};
