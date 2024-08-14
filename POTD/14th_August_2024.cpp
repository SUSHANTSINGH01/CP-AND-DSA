class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        
        int n=str1.size();
        int m=str2.size();
        int dp[n+1][m+1];
        int res=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                dp[i][j]=0;
                if(i==0 || j==0)
                continue;
                if(str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;

                res=max(res,dp[i][j]);
            }
        }
        return res;
    }
};
