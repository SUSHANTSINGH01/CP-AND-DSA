int Solution::solve(vector<vector<int> > &A) {
    
    int res=0;
    for(int i=1;i<A.size();i++)
    {
        A[i][0] = A[i][0] + min(A[i-1][1],A[i-1][2]);
        A[i][1] = A[i][1] + min(A[i-1][0],A[i-1][2]);
        A[i][2] = A[i][2] + min(A[i-1][0],A[i-1][1]);
    }
    res=min({A[A.size()-1][0],A[A.size()-1][1],A[A.size()-1][2]});
    return res;
}
