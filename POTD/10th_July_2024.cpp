

// Cpp Solution


class Solution {
  public:
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        // code here
        
        int dp[n][m];
        int res=INT_MIN;
        
        for(int i=0;i<n; i++)
        dp[i][0]=mat[i][0];
         
        for(int j=0;j<m;j++)
        dp[0][j]=mat[0][j];
           
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i!=0 && j!=0){
                    if(mat[i][j]==1)
                    dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1])) + 1;
                    else
                    dp[i][j]=0;
                }
                res=max(res,dp[i][j]);
            }
        }
      
        return res;
    
    }
};


// Java Solution


class Solution {
    static int maxSquare(int n, int m, int mat[][]) {
        // code here
        Integer[][] dp = new Integer[n][m];
        int res=-2000000000;
        
        for(int i=0;i<n; i++)
        dp[i][0]=mat[i][0];
         
        for(int j=0;j<m;j++)
        dp[0][j]=mat[0][j];
           
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i!=0 && j!=0){
                    if(mat[i][j]==1)
                    dp[i][j]=Math.min(dp[i][j-1],Math.min(dp[i-1][j],dp[i-1][j-1])) + 1;
                    else
                    dp[i][j]=0;
                }
                res=Math.max(res,dp[i][j]);
            }
        }
        return res;
        
    }
}

