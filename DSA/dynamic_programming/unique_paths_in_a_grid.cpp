
int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) 
{
    
       int n=A.size();
       int m=A[0].size();
       if(A[n-1][m-1]==1)
       return 0;
       int dp[n+1][m+1]={0};
       for(int i=0;i<=n;i++)
       for(int j=0;j<=m;j++)
       dp[i][j]=0;
       dp[0][0]=1;
       for(int i=0;i<n;i++)
       for(int j=0;j<m;j++)
       {
                if(j!=0 && A[i][j-1]==0)
                dp[i][j]+=dp[i][j-1];
                if(i!=0 && A[i-1][j]==0)
                dp[i][j]+=dp[i-1][j];
        }
        return dp[n-1][m-1];
}
