int Solution::solve(vector<int> &A) 
{
    int n=A.size();
    int c=1;
    int maxx=A[0];
    for(int i=1;i<n;i++)
    if(A[i]>A[i-1] && A[i]>maxx)
    {
        maxx=A[i];
        c++;
    }
    return c;
}
