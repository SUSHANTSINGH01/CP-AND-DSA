class Solution{
    public:
    long long int dp[1005][1005];
    long long int solve(int arr[],int i, int j)
    {
        if(i>j)
        return 0;
        
       if(dp[i][j]!=-1)
       return dp[i][j];
       
       long long int temp1= arr[i] + min(solve(arr,i+2,j),solve(arr,i+1,j-1));
        
        
        long long int temp2=arr[j] + min(solve(arr,i+1,j-1),solve(arr,i,j-2));
        
        return dp[i][j]=max(temp1,temp2);
    }
    long long maximumAmount(int arr[], int n){
        // Your code here
        memset(dp,-1,sizeof(dp));
        return solve(arr,0,n-1);
    }
};
