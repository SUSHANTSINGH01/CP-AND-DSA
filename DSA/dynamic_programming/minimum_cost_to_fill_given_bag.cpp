class Solution{
		

	public:
	int minimumCost(int cost[], int N, int W) 
	{ 
	    int n=N;
	    int w=W;
        int dp[n+1][w+1];
        
        for(int i=0;i<=w;i++)
        dp[0][i]=1e8;
        
        for(int i=0;i<=n;i++)
        dp[i][0]=0;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if(i<=j)
                {
                    if(cost[i-1]!=-1)
                    dp[i][j]=min(cost[i-1]+dp[i][j-i],dp[i-1][j]);
                    else
                    dp[i][j]=dp[i-1][j];
                }
                
                else
                dp[i][j]=dp[i-1][j];
                
            }
        }
        if(dp[n][w]!=1e8)
        return dp[n][w];
        return -1;
	} 
};
