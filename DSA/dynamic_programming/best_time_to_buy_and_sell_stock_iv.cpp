class Solution {
public:
    
    int maxProfit(int k, vector<int>& prices)
    {
        int n=prices.size();
        if(n==0)
        return 0;
        else if(k==0)
        return 0;
        
        vector<vector<int>> dp(k+1,vector<int>(n,0));
        for(int i=1;i<=k;i++)
        {
            int val=dp[i-1][0]-prices[0];
            for(int j=1;j<n;j++)
            {
                int mx=max(dp[i][j-1],val+prices[j]);
                dp[i][j]=mx;
                val=max(val,dp[i-1][j]-prices[j]);
            }
        }
        return dp[k][n-1];
    }
};
