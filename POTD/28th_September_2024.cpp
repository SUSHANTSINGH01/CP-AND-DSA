class Solution {
    public int minimizeCost(int k, int arr[]) {
        // code here
        
        int n=arr.length;
        int[] dp=new int[n];
        Arrays.fill(dp,100000);
        dp[0]=0;
        
        for(int i=0;i<n-1;i++) 
        for(int j=i+1;j<=i+k && j<n;j++) 
        dp[j]=Math.min(dp[j],dp[i]+Math.abs(arr[i]-arr[j]));
            
        return dp[n-1];
    }
}
