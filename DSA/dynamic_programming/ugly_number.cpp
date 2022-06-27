class Solution {
public:
    int nthUglyNumber(int n) 
    {
        vector<int>dp(n);
        
        dp[0]=1;
        int t=0;
        int th=0;
        int f=0;
        
        for(int i=1;i<n;i++)
        {
            int tempt=2*dp[t];
            int tempth=3*dp[th];
            int tempf=5*dp[f];
            
            dp[i]=min({tempt,tempth,tempf});
           
            if(dp[i]==tempt)
            t++;
            if(dp[i]==tempth)
            th++;
            if(dp[i]==tempf)
            f++;
        }
        
        return dp[n-1];
        
    }
};
