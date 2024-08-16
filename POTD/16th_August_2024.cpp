class Solution
{
    public:
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int dp[n+1];
        dp[0]=0;
        int x_cut=INT_MIN;
        int y_cut=INT_MIN;
        int z_cut=INT_MIN;
        for(int i=1; i<=n; i++) 
        {
            if(i>=x) 
            x_cut=1+dp[i-x];
            if(i>=y)
            y_cut=1+dp[i-y];
            if(i>=z)
            z_cut=1+dp[i-z];
            dp[i]=max({x_cut,y_cut,z_cut});
        }
        return (dp[n]>=0)?dp[n]:0;
    }
};
