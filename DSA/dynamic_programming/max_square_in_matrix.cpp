class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        
    
    int dp[n][m];
    
    for(int i=0;i<n; i++)
    dp[i][0] = mat[i][0];
     
    
    for(int j=0;j<m;j++)
    dp[0][j] = mat[0][j];
        
    
    int ans=INT_MIN;
   
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            if(mat[i][j] == 1)
            dp[i][j] = min(dp[i][j-1],min( dp[i-1][j],dp[i-1][j-1])) + 1;
            else
            dp[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    ans=max(ans,dp[i][j]);
            
     return ans;
    }
};
