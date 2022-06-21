class Solution {
public:
    int maxHeight(vector<vector<int>>& cuboids) {
        
        int res=0;
        int n=cuboids.size();
        vector<vector<int>>vec=cuboids;   
        
        for(auto &cube:vec)
        sort(cube.begin(),cube.end());
        
        sort(vec.begin(),vec.end());
        
        vector<int>dp(n, 0);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(vec[j][0]<=vec[i][0] && vec[j][1]<=vec[i][1] && vec[j][2]<=vec[i][2])
                dp[i]=max(dp[i],dp[j]);  
            }
            dp[i]+=vec[i][2];
            res=max(res,dp[i]);
        }
        return res;
    }
};
