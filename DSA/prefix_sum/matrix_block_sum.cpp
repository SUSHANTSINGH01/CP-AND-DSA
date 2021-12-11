class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) 
    {
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>>res(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                
                for(int i1=(i-k)>=0?i-k:0; i1<=i+k && i1<n;i1++)
                {
                    for(int j1=(j-k)>=0?j-k:0; j1<=j+k && j1<m;j1++)
                    res[i][j]+=mat[i1][j1];
                }
            }
        return res;
        
    }
};

// optimized code using presum 

class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) 
    {
        int n= mat.size();
        int m= mat[0].size();
        
        vector<vector<int>> presum(n+1, vector<int> (m+1, 0));
        vector<vector<int>>res(n, vector<int> (m, 0));
        
        
        for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        presum[i][j] = mat[i-1][j-1] + presum[i][j-1] + presum[i-1][j] - presum[i-1][j-1];
        
        for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            int r1 = max(0, i-k);
            int r2 = min(n, i+k+1);
            int c1 = max(0, j-k);
            int c2 = min(m, j+k+1);
            res[i][j] = presum[r2][c2] - presum[r2][c1] - presum[r1][c2] + presum[r1][c1];
        }

        return res;
    }
};
