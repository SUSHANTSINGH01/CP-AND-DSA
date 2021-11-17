class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
       int n=matrix.size();
        int l=matrix[0][0];
        int r=matrix[n-1][n-1];
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(count(mid,matrix,n)<k)
            l=mid+1;
            else 
            r=mid;
        }
        return r;        
    }
    int count(int m,vector<vector<int>>& mat,int n)
    {
        int r=0;
        int c=n-1;
        int f=0;
        while(r<n && c>=0)
        {
            if(mat[r][c]<=m)
            {
                f+=c+1;
                r++;
            }
            else 
            c--;
        }
        return f;
    }
};


// greedy approach

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            ans.push_back(matrix[i][j]);
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};
