int solve1(vector<int>&A,int n,int sum)
{
    int dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0||j==0)
            dp[i][j]=0;
            
            else if(j>=A[i-1])
            dp[i][j]=max(A[i-1]+dp[i-1][j-A[i-1]],dp[i-1][j]);

            else
            dp[i][j]=dp[i-1][j];

       }
    }
    return dp[n][sum];
}

int Solution::solve(vector<int> &A) 
{
    int n=A.size();
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=A[i];


    return sum-(2*(solve1(A,n,sum/2))); 
}
