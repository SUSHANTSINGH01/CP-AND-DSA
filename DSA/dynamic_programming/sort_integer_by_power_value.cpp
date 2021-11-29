class Solution {
public:
    vector<int>dp;
    int solve(int n) 
    {
        
        if(n==1)
        return dp[n] = 0;
        
        if(n<=1000 && dp[n] != -1)
        return dp[n];
        
        if(n&1) 
        {
            if(n<=1000)
            return dp[n]=solve(3*n+1)+1;
            return solve(3*n+1)+1;
            
        }
        else 
        {
            if(n<=1000)
            return dp[n]=solve((n>>1))+1;
            return solve((n>>1))+1;
            
        }
        return 0;
    }
    int getKth(int lo, int hi, int k) 
    {
        
        dp = vector<int>(1005, -1);
        priority_queue<pair<int, int>>pq;
        
        for(int i=lo;i<=hi;i++) 
        {
            int c=solve(i);
            pq.push({c, i});
            if(pq.size()>k)
            pq.pop();
        }
        
        return pq.top().second;
    }
};
