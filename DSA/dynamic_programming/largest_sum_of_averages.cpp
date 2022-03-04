class Solution {
public:
    
    double solve(vector<int>&arr, int pos, int k, vector<vector<double>>&dp)
    {
        if(pos>=arr.size()) 
        return 0;
        
        if(k<=0)
        return INT_MIN;
       
        if(dp[pos][k]!=-1) 
        return dp[pos][k];
        
        double ans=0;
        double sum=0;
        
        for(int i=pos;i<arr.size();i++)
        {
            sum+=arr[i];
            ans=max(sum/(i-pos+1)+solve(arr,i+1,k-1,dp),ans);
        }
        
        return dp[pos][k]=ans;
    }
    
    double largestSumOfAverages(vector<int>&nums, int k) 
    {
        int n=nums.size();
        vector<vector<double>>dp(n,vector<double>(k+1,-1));
        return solve(nums,0,k,dp);      
    }
};
