int Solution::solve(int A) {
        int md=1000000007;
        vector<vector<long long int>>dp(A+1,vector<long long int>(2,0));
        dp[1][0]=24;
        dp[1][1]=12;
       
        for(int i=2;i<=A;i++)
        {
            long long int temp=dp[i-1][0];
            dp[i][0]=(11*dp[i-1][0]+10*dp[i-1][1])%md;
            dp[i][1]=(5*temp+7*dp[i-1][1])%md;  
        }
        return (dp[A][0]+dp[A][1])%md;
}
