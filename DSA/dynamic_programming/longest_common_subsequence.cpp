class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        
      
        vector<vector<int>>dp(x+1,vector<int>(y+1));
        for(int i=1;i<=x;i++)
        for(int j=1;j<=y;j++)
        dp[i][j]=(s1[i-1]==s2[j-1])?dp[i-1][j-1]+1:max(dp[i-1][j],dp[i][j-1]);
        
        return dp[x][y];  
    }
};
