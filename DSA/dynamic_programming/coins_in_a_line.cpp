int dp[1002][1002][2];

int solve(int i,int j,int s,vector<int>A)
{
    if(i>j)
    return 0;
    
    if(dp[i][j][s])
    return dp[i][j][s];
    
    if(!s)
    return dp[i][j][s]=max(A[j]+solve(i,j-1,1,A),A[i]+solve(i+1,j,1,A));
    
    else 
    return dp[i][j][s]=min(solve(i,j-1,0,A),solve(i+1,j,0,A));
    
}

int Solution::maxcoin(vector<int> &A) 
{
    memset(dp,0,sizeof(dp));

    return solve(0,A.size()-1,0,A);
}
