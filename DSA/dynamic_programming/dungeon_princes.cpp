int Solution::calculateMinimumHP(vector<vector<int>>&A) {
    
    int row=A.size();
    int col=A[0].size();

    int dp[row][col];
    dp[row-1][col-1]=max(1,1-A[row-1][col-1]);

    for(int i=row-2;i>=0;i--)
    dp[i][col-1]=max(1,dp[i+1][col-1]-A[i][col-1]);
    
    for(int i=col-2;i>=0;i--)
    dp[row-1][i]=max(1,dp[row-1][i+1]-A[row-1][i]);
    

    for(int i=row-2;i>=0;i--)
    {
        for(int j=col-2;j>=0;j--)
        {
            int d=max(dp[i+1][j]-A[i][j],1);
            int r=max(dp[i][j+1]-A[i][j],1);
            dp[i][j]=min(r,d);
        }
    }
    return dp[0][0];
}
