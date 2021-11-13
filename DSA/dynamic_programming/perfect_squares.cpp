class Solution {
public:
    int numSquares(int n) 
    {
        vector<int>v;
        int p=1;
        int cur=1;
        
        while(cur<=n) 
        {
            cur = pow(p++, 2);
            v.push_back(cur);
        }
        
        vector<int>dp(n+1, n+1);
        dp[0]=0;
        
        for(int i=1; i<= n; i++)
        for(auto it : v)
        if(it<=i) 
        dp[i]=min(dp[i],dp[i-it]+1);

        return dp[n];
    }
};
