class Solution {
public:
    bool solve(int i, int j, int n, int m,vector<vector<int>>& grid1, vector<vector<int>>& grid2)
    {
       if(i<0 || j<0 || i>=n || j>=m) 
       return 1;
       else if((grid1[i][j]==0 && grid2[i][j]==0))
       return 1;
       else if(grid1[i][j]==1 && grid2[i][j]==0)
       return 1;
       else if(grid1[i][j]==0 && grid2[i][j]==1) 
       return 0;
       grid1[i][j]=0; 
       grid2[i][j]=0;
       bool ans1=solve(i+1,j,n,m,grid1,grid2);
       bool ans2=solve(i,j+1,n,m,grid1,grid2);
       bool ans3=solve(i-1,j,n,m,grid1,grid2);
       bool ans4=solve(i,j-1,n,m,grid1,grid2);
       if(ans1&&ans2&&ans3&&ans4) 
       return 1;
       return 0;
   }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
    {
       int n=grid1.size();
        int m=grid1[0].size();
        int ans=0;
        for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        if(grid1[i][j]==1 && grid2[i][j]==1)
        if(solve(i,j,n,m,grid1,grid2)) 
        ans++;
        return ans;  
    }
};
