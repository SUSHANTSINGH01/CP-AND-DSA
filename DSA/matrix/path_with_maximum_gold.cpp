class Solution {
public:
    
    int dfs(vector<vector<int>>& grid, int i, int j, int r, int c)
    {
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]==0 ) 
        return 0;
       
        int val=grid[i][j];
        grid[i][j]=0; 
        
        int res1 = dfs(grid, i+1,j, r,c);
        int res2 = dfs(grid, i, j+1, r,c);
        int res3 = dfs(grid, i-1,j,r,c);
        int res4 = dfs(grid,i,j-1,r,c);
        
        grid[i][j]=val;   
        int maxx=max(res1,max(res2,max(res3,res4)));
        
        return maxx+val;
        
        
    }
    int getMaximumGold(vector<vector<int>>& grid) 
    {
           int r=grid.size();
           int c=grid[0].size();
           int res=0;
           for(int i=0; i<r; i++)
           for(int j=0; j<c; j++)
           if(grid[i][j]!=0)           
           res=max(res, dfs(grid,i,j,r,c));
            
           return res; 
    }
};
