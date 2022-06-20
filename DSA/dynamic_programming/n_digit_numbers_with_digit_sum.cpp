int Solution::solve(int A, int B) {
    
    vector<vector<int>>dp(A,vector<int>(B,0));
  
    if(B<1 || B>9*A) 
    return 0;
    
    for(int i=0;i<B;i++)
    if(i+1<=9) 
    dp[0][i]=1;
        
    
    for(int j=0;j<A;j++)
    dp[j][0]=1;
    
    for(int i=1;i<A;i++)
    {
        for(int j=1;j<B;j++)
        {
            int k=0;
            dp[i][j]=0;
            if(j>=9) 
            k=j-9;
            for(;k<=j;k++)
            dp[i][j]=(dp[i][j]+dp[i-1][k])%1000000007;   
        }
    }
    return dp[A-1][B-1];
}

