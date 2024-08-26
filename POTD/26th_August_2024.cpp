class Solution {
  public:
    /*You are required to complete this method*/
    int wildCard(string pattern, string str) {
        // code here
        
        int n=pattern.length();
        int m=str.length();
        bool dp[n+1][m+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if(i==0 && j==0)
                dp[i][j]=1;
                    
                else if(j==0 && pattern[i-1]=='*')
                dp[i][j]=dp[i-1][j];
                
                else if(i==0 || j==0)
                dp[i][j]=0;
                    
                else if(pattern[i-1]==str[j-1] || pattern[i-1]=='?')
                dp[i][j]=dp[i-1][j-1];
                
                else if(pattern[i-1]=='*')
                dp[i][j]=(dp[i][j-1] || dp[i-1][j]);
                
                else 
                dp[i][j]=0;
            }
        }
        
        return dp[n][m];
    }
};
