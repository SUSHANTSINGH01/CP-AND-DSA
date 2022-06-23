int Solution::solve(vector<int> &A) 
{
    int dp[A.size()];
    dp[0]=A[0];
    dp[1]=A[0]+A[1];
    
    for(int i=2;i<A.size();i++)
    dp[i]=A[i]+min(dp[i-1],dp[i-2]);
    

    return dp[A.size()-1];
}
