class Solution {
public:
    vector<vector<int>>dp;
    int solve(vector<int>& nums1, vector<int>& nums2, int a, int b)
    {
        
        if(a < 0 || b < 0) 
        return 0;
        
        if(dp[a][b] != INT_MAX) 
        return dp[a][b];
        
        int ans = 0;
        for(int i=0;i<=b;++i)
        if(nums2[i] == nums1[a]) 
        ans = max(ans, solve(nums1,nums2,a-1,i-1)+1);
        for(int i=0;i<=a;++i)
        if(nums1[i] == nums2[b]) 
        ans = max(ans,solve(nums1,nums2,i-1,b-1)+1);
        
        ans = max(ans,solve(nums1,nums2,a-1,b-1));
        
        return dp[a][b] = ans;
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2)
    {
        dp.resize(nums1.size(),vector<int>(nums2.size(),INT_MAX));
        return solve(nums1,nums2,nums1.size()-1,nums2.size()-1);
    }
};
