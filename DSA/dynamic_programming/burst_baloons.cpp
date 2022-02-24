class Solution {
public:
    int maxCoins(vector<int>& nums)
    {
        int n=nums.size()+2;        
        vector<vector<int>>dp(n, vector<int>(n));
        vector<int>v(n, 1);
        int i=1;
        for(auto it : nums) 
        v[i++] = it;
        
        for(int i=2; i<=n; i++) 
        { 
           
            for(int j=0; j<=n-i; j++) 
            {
                int temp=j+i-1;
                for(int k=j+1; k<temp; k++)
                dp[j][temp] = max(dp[j][temp], dp[j][k] + dp[k][temp] + v[j]*v[k]*v[temp]);
                
            }
        }
        return dp[0][n-1];
    }
};
