class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n=wt.size();
        int dp[n+1][W+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=W;j++){
                dp[i][j]=0;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=W;j++)
            {
                if(wt[i-1]<=j)
                dp[i][j]=max(dp[i-1][j], val[i-1]+dp[i-1][j-wt[i-1]]);
                else 
                dp[i][j]=dp[i-1][j];
            }
        }
        
        return dp[n][W];
    }
};
