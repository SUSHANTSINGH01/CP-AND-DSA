vector<int> Solution::solve(vector<int> &A)
{
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        int x=A[i];
        A[i]=x*x;
    }
    sort(A.begin(),A.end());
    return A;
}
