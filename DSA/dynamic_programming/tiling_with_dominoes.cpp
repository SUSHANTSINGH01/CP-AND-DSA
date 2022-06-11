int Solution::solve(int A) 
{
    
    long long int dp[A+1];
    long long int dp1[A+1];
    dp[0]=1;
    dp[1]=0;
    dp1[0]=0;
    dp1[1]=1;
    for (int i=2; i<=A; i++) 
    {
        dp[i]=(dp[i-2]+2*dp1[i-1])%1000000007;
        dp1[i]=(dp[i-1]+dp1[i-2])%1000000007;
        
    }
    return dp[A]%1000000007;
}
