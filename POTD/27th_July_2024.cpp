class Solution{
  public:
    int solve(string str, int l, int r, vector<vector<int>>&dp){
        if(l>=r)
        return 0;
        
        if(dp[l][r]!=-1)
        return dp[l][r];
        
        if(str[l]==str[r])
        return dp[l][r]=solve(str,l+1,r-1,dp);
        
        else
        return dp[l][r]=1+min(solve(str,l+1,r,dp),solve(str,l,r-1,dp));
    }
    int countMin(string str){
    //complete the function here
       int n=str.size();
       vector<vector<int>>dp(n,vector<int>(n,-1));
       return solve(str,0,n-1,dp);
    }
};
