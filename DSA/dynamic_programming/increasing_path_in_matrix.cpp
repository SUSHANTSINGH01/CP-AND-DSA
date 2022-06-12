    int solve1(int i,int j,vector<vector<int>>&dp ,vector<vector<int>> &A, int prev_element, int r, int c)
    {
        if(j>=c-1 && i>=r-1)
        {
             if(prev_element<A[i][j])
             return dp[i][j]=1;
             else 
             return dp[i][j]=0;
        }
        
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        int k=A[i][j];
        
         int v1 = 0;
         
         if(i<r-1 && prev_element < A[i][j])
         v1+=1+solve1(i+1, j , dp ,A, k , r,c);
        
         int v4 = 0;
         if(j<c-1 && prev_element < A[i][j])
         v4+=1+solve1(i , j+1 , dp , A , k , r,c);
         
         
        
        return dp[i][j]=max(v1,v4);
    }


int Solution::solve(vector<vector<int> > &A) 
{
        int r=A.size();
        int c=A[0].size();
        
        vector<vector<int>>dp(r,vector<int>(c,-1));
        
        int res=0;
       
        res=max(res,solve1(0,0,dp,A,-1,r,c));

        if(dp[0][0]==r+c-1)
        return dp[0][0];  
        else
        return -1;  
}
