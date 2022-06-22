class Solution {
public:
    int numOfWays(int n) {
     
        
        int md=1000000007;
        vector<vector<long long int>>dp(n+1,vector<long long int>(2,0));
        dp[1][0]=6;
        dp[1][1]=6;
        for(int i=2;i<=n;i++)
        {
            dp[i][0]=(3*dp[i-1][0]+2*dp[i-1][1])%md;
            dp[i][1]=(2*dp[i-1][0]+2*dp[i-1][1])%md;
            
        }
        return (dp[n][0]+dp[n][1])%md;
    }
};
