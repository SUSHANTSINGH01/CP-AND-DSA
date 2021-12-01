class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        int dp[n+1][m+1];
        int res=0;
        
        for(int i=0;i<=n;i++)
        dp[i][0]=0;
        
        for(int j=0;j<=m;j++)
        dp[0][j]=0;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=0;
                if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;

                res=max(res,dp[i][j]);
            }
        }
        return res;
    }
};
