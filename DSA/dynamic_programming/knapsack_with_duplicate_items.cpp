class Solution{
public:
    int knapSack(int n, int w, int val[], int wt[])
    {
        // code here
         int dp[w+1]={0};

        for(int i=1;i<=n;i++)
        for(int j=1;j<=w;j++)
        if(wt[i-1]<=j)
        dp[j]=max(val[i-1]+dp[j-wt[i-1]],dp[j]);

        return dp[w];
    }
};
