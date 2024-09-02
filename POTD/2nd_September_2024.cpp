class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int n=grid.size();
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> >pq; 
        pq.push({grid[0][0],{0,0}});
        dp[0][0]=grid[0][0];
        
        while(!pq.empty())
        {
            
            int dis=pq.top().first;
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            for(int i=0;i<4;i++)
            {
                int new_x=x+dx[i];
                int new_y=y+dy[i];
                if(new_x>=0 && new_x<n && new_y>=0 && new_y<n)
                {
                    if(dis+grid[new_x][new_y]<dp[new_x][new_y])
                    {
                        dp[new_x][new_y]=dis+grid[new_x][new_y];
                        pq.push({dp[new_x][new_y],{new_x,new_y}});
                    }
                }
            }
            pq.pop();
        }
        return dp[n-1][n-1];
    }
};
