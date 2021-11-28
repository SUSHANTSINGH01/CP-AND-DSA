class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        int dp[n+1];
        dp[0] = 0;
        for(int i=1; i<=n; i++) 
        {
            int xcut = INT_MIN;
            int ycut = INT_MIN;
            int zcut = INT_MIN;
            if(i>=x) 
            xcut = 1 + dp[i-x];
            if(i>=y)
            ycut = 1 + dp[i-y];
            if(i>=z)
            zcut = 1 + dp[i-z];
            dp[i] = max({xcut, ycut, zcut});
        }
        return (dp[n]<0)?0:dp[n];
    }
};
