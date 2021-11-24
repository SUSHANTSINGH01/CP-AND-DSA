class Solution{
public:
    int nCr(int n, int r)
    {
        // code here
        int dp[n+1][r+1];
        int md = 1e9+7;
        
        for(int i=0;i<r+1;i++) 
        dp[0][i]=0;
        for(int i=0;i<n+1;i++) 
        dp[i][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=r;j++)
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%md;
            
        }
        return dp[n][r];
    }
};
