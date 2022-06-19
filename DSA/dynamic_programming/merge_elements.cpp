int Solution::solve(vector<int> &A) {
    int n=A.size();
    if(n==0) 
    return 0;
    vector<vector<int>> dp(n,vector<int>(n,0));
    
    vector<int>pre(n,0);
    pre[0]=A[0];
    
    for(int i=1;i<n;i++) 
    pre[i]=pre[i-1]+A[i];

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            int k=j+i;
            int add=INT_MAX;
            for(int l=j;l<k;l++)
            add=min(add,dp[j][l]+dp[l+1][k]);
            
            if(j==0)
            dp[j][k]=pre[k]+add;
            
            else
            dp[j][k]=pre[k]-pre[j-1]+add;
        }
    }
    return dp[0][n-1];
}
