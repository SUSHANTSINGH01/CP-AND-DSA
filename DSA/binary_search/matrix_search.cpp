int Solution::searchMatrix(vector<vector<int> > &A, int B)
{
    int n=A.size();
    
    if(n==0 || A[0][0]>B)
    return 0;
    else
    {
        int i=0;
        for(i=0;i<n;i++)
        if(A[i][0]>B)
        break;
        i--;
        for(int j=0;j<A[i].size();j++)
        if(A[i][j]==B)
        return 1;

        return 0; 
    }
}
