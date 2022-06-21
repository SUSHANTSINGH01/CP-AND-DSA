class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
       
        if(target>n*k || target<n)
        return 0;
        
        int md=1000000007;
        
        if(n==1)
        return 1;
        vector<vector<long long>>dp(n+1, vector<long long>(target+1, 0));
        for(int i=1;i<=min(target,k);i++)
        dp[1][i]=1;
        
        for(int i=2;i<=n;i++)
        for(int j=1;j<=target;j++)
        for(int l=1;l<=k && j-l>=1;l++)
        dp[i][j]=(dp[i][j]+dp[i-1][j-l])%md;
            
        return dp[n][target]%md;
    }
};
