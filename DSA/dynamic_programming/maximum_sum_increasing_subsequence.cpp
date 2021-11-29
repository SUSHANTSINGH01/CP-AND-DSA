class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	   vector<int>dp(n,0);
	   dp[0]=arr[0];
	   int ans=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        int maxx=INT_MIN;
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]<arr[i])
	            maxx=max(maxx,dp[j]);
	        }
	        
	        if(maxx!=INT_MIN)
	        dp[i]=arr[i]+maxx;
	        else
	        dp[i]=arr[i];
	            
	        ans=max(ans,dp[i]);     
	    }
	    return ans;

	}  
};
