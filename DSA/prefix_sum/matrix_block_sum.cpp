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
