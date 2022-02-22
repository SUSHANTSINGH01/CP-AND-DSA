class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int maxx=0;
        vector<vector<int>>dp(n,vector<int>(m,0));   
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == '1')
                {
                    if(j==0)
                    dp[i][j]=1;
                    else
                    dp[i][j]=dp[i][j-1]+1;
                   
                    int width = dp[i][j];
                    for(int k=i;k>=0;k--)
                    {
                        width = min(width,dp[k][j]);
                        maxx = max(maxx,width*(i-k+1));
                    }
                }
                
            }
        }
        return maxx;
    }
};
