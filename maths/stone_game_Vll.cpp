class Solution {
public:
    int dp[1005][1005]={0};
    
    int solve(int i, int j,int sum, vector<int>&vec)
    {
        if(i>j)
        return 0;
        if(dp[i][j]!=0)
        return dp[i][j];
        int res=sum-max(solve(i+1,j,sum-vec[i],vec), solve(i,j-1,sum-vec[j],vec));
        return dp[i][j]=res;
    }
    
    int stoneGameVII(vector<int>& stones) 
    {
       
        int sum=0;
        int n=stones.size();
        sum=accumulate(stones.begin(),stones.end(),sum);
        int ans1=solve(1,n-1,sum-stones[0],stones);
        cout<<sum<<endl;
        int ans2=solve(0,n-2,sum-stones[n-1],stones);
        return max(ans1,ans2);
        
    }
};
