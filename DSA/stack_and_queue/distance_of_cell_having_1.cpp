class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
    
    
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> ans(n, vector<int>(m, 0));
	    queue<pair<int,pair<int,int>>> q;
	     for(int i=0; i<n; i++) 
	     {
	        for(int j=0; j<m; j++)
	        {
	            if(grid[i][j]==0)
	                ans[i][j] = INT_MAX;
	            else
	                q.push({0, {i,j}});
	        }
	    }
	    int x[] = {1, -1, 0, 0};
	    int y[] = {0, 0, 1, -1};
	    while(!q.empty())
	    {
	        int f = q.front().second.first;
	        int s = q.front().second.second;
	        int dist = q.front().first;
	        for(int i=0; i<4; i++) 
	        {
	            int n_x = f+x[i];
	            int n_y = s+y[i];
	            if(n_x >= 0 && n_x < n && n_y >= 0 && n_y < m && 1+dist<ans[n_x][n_y]) 
	            {
	                ans[n_x][n_y] = 1 + dist;
	                q.push({1+dist, {n_x, n_y}});
	            }
	        }
	        q.pop();
	    }
	    return ans;
	   
	}
};
