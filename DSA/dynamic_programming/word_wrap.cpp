class Solution {
public:
    long long int dp[505];
    long long int solve(int ind, int k, vector<int> &arr, int pre)
    {
        int n=arr.size(); 
        
         if(ind==n) 
        return (-1 * pre);
       
        if(dp[ind]!=-1) 
        return dp[ind];
        
        int prev = 0;
        long long int ans = INT_MAX;
        
        for(int i=ind; i<n; i++)
        {
            prev+=arr[i];
            
            if(prev>k) 
            break;
           
            int x=((k-prev)*(k-prev));
            long long int temp = x + solve(i+1, k, arr, x);
            ans = min(ans, temp);
            prev += 1;
        }
        
        return dp[ind]=ans;
    }

    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        memset(dp, -1, sizeof(dp));
        return solve(0, k,nums,0);
        
    } 
};
