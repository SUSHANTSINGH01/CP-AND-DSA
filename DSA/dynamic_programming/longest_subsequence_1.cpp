class Solution{
public:
    int longestSubsequence(int N, int A[])
    {
        // code here
        int dp[N]={0};
        dp[0]=1;
        int ans=1;
        for(int i=1;i<N;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(abs(A[i]-A[j])==1)
                dp[i]=max(dp[i],dp[j]);
                
            }
            dp[i]+=1;
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
