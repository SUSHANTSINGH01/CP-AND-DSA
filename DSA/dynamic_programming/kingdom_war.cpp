int Solution::solve(vector<vector<int> > &A) {
    int maxx=INT_MIN;
    int n=A.size();
    int m=A[0].size();
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(i<n-1) 
            A[i][j]+=A[i+1][j];
            
            if(j<m-1) 
            A[i][j]+=A[i][j+1];
            
            if(i<n-1 && j<m-1) 
            A[i][j]-=A[i+1][j+1];
            
            maxx=max(maxx,A[i][j]);
        }
    }
    return maxx;
}
