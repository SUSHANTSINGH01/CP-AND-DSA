vector<vector<int> > Solution::solve(vector<vector<int> > &A) 
{
    int n=A.size();
    int m=A[0].size();

    vector<vector<int>>res(n,vector<int>(m,0));

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    res[j][i]=A[i][j];

    return res;
}
