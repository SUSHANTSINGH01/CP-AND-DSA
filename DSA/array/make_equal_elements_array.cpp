int Solution::solve(vector<int> &A, int B) 
{
    sort(A.begin(),A.end());

    int n=A.size();

    for(int i=1;i<n;i++)
    if((A[i]-A[i-1])!=0 && (A[i]-A[i-1])!=B)
    return 0;

    return 1;
}
