class Solution {
public:
   int solve(int row, int col, vector<vector<int>>& matrix, vector<vector<int>> &dp,int n)
   {
        
     
        if(row>=n || col>=n || row<0 || col<0) 
        return INT_MAX;
        if(row+1==n) 
        return matrix[row][col];
        if(dp[row][col]!=-1) 
        return dp[row][col];
        return dp[row][col]=matrix[row][col] + min(solve(row+1,col-1,matrix,dp,n),min(solve(row+1,col,matrix,dp,n),solve(row+1,col+1,matrix,dp,n)));
    }
        
        
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        
        int res=INT_MAX;
        int n=matrix.size();
        
        vector<vector<int>>dp(n, vector<int>(n,-1));
        
        for(int i=0; i<n; i++)
        res=min(solve(0,i,matrix,dp,n),res);    
        
        return res;
    
    }
};
